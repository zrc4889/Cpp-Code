#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

const int maxn = 105;
int n, m;
string s[maxn];
bool vis[maxn][maxn];

int f[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

void func(int x, int y)
{
    if (x <= 0 || y < 0 || x > n || y >= m || vis[x][y] || s[x][y] == '0')
        return;
    vis[x][y] = true;
    for (int i = 0; i < 4; i++)
    {
        func(x + f[i][0], y + f[i][1]);
    }
    // if (i == n && j == n)
    // {
    //     cout << ans;  // 到达边界
    //     return;
    // }
    // if (!vis[i+1][j]) vis[i+1][j]=1,func(i+1,j,ans+1),vis[i+1][j]=0; // 没搜过
    // if (!vis[i-1][j]) vis[i-1][j]=1,func(i-1,j,ans+1),vis[i-1][j]=0;
    // if (!vis[i][j+1]) vis[i][j+1]=1,func(i,j+1,ans+1),vis[]
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
    // int n;
    cin >> n >> m;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < m; j++) {
            // 非零数字，且没有标记过
            // printf("%d ", vis[i][j]);
            if (s[i][j] != '0' && !vis[i][j]) // 是细胞
            {
                cnt++; // 统计
                func(i, j);
            }
        }
        // puts("");
    }
    cout << cnt;
}