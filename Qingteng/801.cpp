#include <bits/stdc++.h>
using namespace std;
int p[110]; // 第 i 行皇后放在第 i 行的 p[i] 列
int ans = 0;
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
        p[x] = i;
        bool flag = true;
        for (int j = 1; j < x; ++j)
        {
            if (p[j] == p[i] || p[j] - j == p[i] - i || p[j] + j == p[i] + i)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            dfs(x + 1);
        }
    }
}

int main()
{
    //  /   int n;
    cin >> n;
    dfs(n);
    cout << ans;
    return 0;
}