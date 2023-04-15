#include <bits/stdc++.h>

using namespace std;
const int N = 100000 + 10;
int a[N], r[N];
int n;
int main() {
    freopen("stack.in", "r", stdin);
    freopen("stack.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    for (int i = n; i >= 1; --i) r[i] = max(r[i + 1], a[i]);

    stack<int> stk;

    for (int i = 1; i <= n; ++i) {
        while (!stk.empty() && stk.top() > r[i]) {
            cout << stk.top() << " ";
            stk.pop();
        }
        stk.push(a[i]);
    }

    while (!stk.empty()) cout << stk.top() << " ", stk.pop();
    return 0;
}
