#include <bits/stdc++.h>
using namespace std;
int a[15], p[15];
int n;
void dfs(int x)
{
    if (x == n + 1)
    {
        for (int i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << endl;
        return;
    }
    for (int i = 1; i <= x; i++)
    {
        if (p[i] == 1)
            continue;
        // a[x] = i;
        p[i] = 1;
        dfs(x + 1);
        p[i] = 0;
    }
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    dfs(1);
    return 0;
}