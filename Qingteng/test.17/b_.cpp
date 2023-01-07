#include <bits/stdc++.h>
using namespace std;

// 全场B最低分，枯了

int ans = 0;
int k, s;
// bool mem[1000][1000][1000];
bool vis[4];

void dfs(int x, int y, int z)
{
    if (x + y + z == s && x <= k && y <= k && z <= k)
    {
        ans++;
        return;
    }
    if (x + y + z > s)
    {
        return;
    }
    else
    {
        for (int i = 0; i <= k; i++)
        {
            if (!vis[1])
            {
                vis[1] = 1;
                dfs(x + 1, y, z);
                vis[1] = 0;
            }
            if (!vis[2])
            {
                vis[2] = 1;
                dfs(x, y + 1, z);
                vis[2] = 0;
            }
            if (!vis[3])
            {
                vis[3] = 1;
                dfs(x, y, z + 1);
                vis[3] = 0;
            }
        }
    }
}

int main()
{
    // start here..

    // int k, s;

    cin >> k >> s;

    dfs(0, 0, 0);

    cout << ans / 9<< endl;

    return 0;
}