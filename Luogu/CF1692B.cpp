#include <bits/stdc++.h>
using namespace std;
const int N = 50 + 10, M = 1e4 + 10;
int t;
int n;
int a[N], vis[M];
int main()
{
    cin >> t;
    while (t--)
    {
        memset(vis, 0, sizeof(vis)); // 初始化
        cin >> n;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            vis[a[i]]++; // 统计出现个数
        }
        int ans = 0;
        for(int i = 1; i <= n; ++i)
        {
            ans += vis[a[i]] - 1; 
            vis[a[i]] = 1; // 等于1下次加的时候就是0了，避重
        }
        if (ans % 2 == 1) // 奇数，即要选择一个没
            ans++;
        cout << n - ans << endl;
    }
    cout << endl;
    return 0;
}