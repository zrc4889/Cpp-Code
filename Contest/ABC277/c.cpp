#include <bits/stdc++.h>
using namespace std;

map<int, vector<int>> mp;
map<int, int> vis;
int ans = -1;

void dfs(int x)
{
    vis[x] = 1, ans = max(ans, x);
    int s = mp[x].size();
    for (int i = 0; i < s; i++)
    {
        if (!vis[mp[x][i]])
        {
            dfs(mp[x][i]);
        }
    }
    return;
}

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    int u, v;
    cin >> n;
    while (n--)
    {
        cin >> u >> v;
        mp[u].push_back(v);
        mp[v].push_back(u);
    }
    dfs(1);

    cout << ans << endl;
    return 0;
}