#include <bits/stdc++.h>
using namespace std;
int p[110]; // 第 i 行皇后放在第 i 行的 p[i] 列
int ans = 0;
bool c[110], r[110], w[110];
int n;
void dfs(int x)
{
    if (x > n)
    {
        ans++;
        return;
    }
    for (int i = 1; i <= n; ++i)
    {
        if (c[i] == false && r[x - i + n] == false && w[x + i] == false)
        {
            c[i] = true;
            r[x - i + n] = true;
            w[x + i] = true;
            dfs(x + 1);
            w[x + i] = false;
            r[x - i + n] = false;
            c[i] = false;
        }
    }
}

int main()
{
    //  /   int n;
    cin >> n;
    dfs(1);
    cout << ans;
    return 0;
}