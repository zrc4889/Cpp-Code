#include <bits/stdc++.h>
using namespace std;
const int _ = 1000001;
int a[11];
int s[_][11];
int ans = 0;
int n;
void dfs(int t, int m)
{
    if (t > 10)
    {
        // t > 10 说明调料位放完了
        if (n == m)
        {
            // 满足可行的条件，存下答案

            ans++;
            for (int i = 1; i <= 10; i++)
                s[ans][i] = a[i];
            // cout << endl;
        }
        // 放完了却不满足，return掉
        return;
    }
    for (int i = 1; i <= 3; i++)
    {
        if (m + i > n)
            break;
        a[t] = i;
        dfs(t + 1, m + i);
        a[t] = 0;
    }
}

signed main()
{
    cin >> n;
    dfs(1, 0);
    cout << ans << endl;
    for (int i = 1; i <= ans; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << s[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}