#include <bits/stdc++.h>
using namespace std;

stack<int> s;
int ans[114514];
int n, a[114514]; 

// STL 容器补全很慢

int main()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    for (int i = 1; i <= n; ++i)
    {
        while (!s.empty() && !(a[s.top()] <= a[i]))
            s.pop();
        if (!s.empty())
            ans[i] = a[s.top()];
        s.push(i);
    }
    for (int i = 1; i <= n; ++i)
        cout << ans[i] << '\n';
    return 0;
}