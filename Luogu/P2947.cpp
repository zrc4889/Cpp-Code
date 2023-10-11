#include <bits/stdc++.h>
using namespace std;

const int _ = 1e5 + 10;

int n, cur;
int h[_], ans[_];

int main()
{
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> h[i];

    stack<int> s;
    for (int i = 1; i <= n; ++i)
    {
        cur = h[i];

        while (!s.empty() && h[s.top()] < cur) s.pop();
        if (!s.empty()) ans[i] = s.top();
        
        s.push(i);
    }

    for (int i = 1; i <= n; ++i)
        cout << ans[i] << '\n';
    return 0;
}