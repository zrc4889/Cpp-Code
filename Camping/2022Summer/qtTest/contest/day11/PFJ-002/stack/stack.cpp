#include <bits/stdc++.h>
using namespace std;
const int _ = 1e5 + 10;
int a[_], r[_];
// r 后缀最大值
int main()
{
    int n;
    freopen("stack.in", "r", stdin);
    freopen("stack.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; ++ i)
        cin >> a[i];
    for (int i = n; i >= 1; --i)
        r[i] = max(r[i + 1], a[i]);
    stack<int> st;

    for (int i = 1; i <= n; i++)
    {
        while (!st.empty() && st.top() > r[i])
        {
            cout << st.top() << ' ';
            // 非空 且字典序大
            st.pop();
        }
        st.push(a[i]);
    }
    while (!st.empty())
        cout << stk.top() << " ", stk.pop();
    return 0;
}