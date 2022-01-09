#include <bits/stdc++.h>
using namespace std;
int p[100001];
int flag;
int n, ans = 0;
void dfs(int x)
{
    if (x > n)
    { // 相当于 x = n + 1
        ans++;
        return;
    }
    for (int i = 1; i <= n; ++i)
    {
        p[x] = i;
        flag = 1;
        for (int j = 1; j < x; ++j)
        {
            if (p[j] == p[x] || j - p[j] == x - p[x] || j + p[j] == x + p[x])
            { // 检查是否冲突
                flag = 0;
                break;
            }
        }
        if (flag)
            dfs(x + 1);
    }
}
int main()
{
    cin >> n;
    dfs(n);
    cout<<ans;
    system("pause");
    return 0;
}