#include <bits/stdc++.h>
using namespace std;
int a[30];
int n, r;
void dfs(int x, int k)
{
    if (k == r + 1)
    {
        for (int i = 1; i <= r; i++)
        {
            cout << " " << a[i];
        }
        cout << endl;
        return;
    }
    for (int i = x; i <= n; i++)
    {
        a[k] = i;
        dfs(i + 1, k + 1);
    }
}
int main()
{
    cin >> n >> r;
    dfs(1, 1);
    // system("pause");
    return 0;
}