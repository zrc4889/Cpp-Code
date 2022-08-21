#include <bits/stdc++.h>
using namespace std;
const int _ = 110;
int a[_][_] = {0};
int n;
void update()
{
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
            {

                if (a[i][j] == 0)
                    a[i][j] = a[i][k] + a[k][j];
                if (i == j)
                    a[i][j] = 0;
                else
                    a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
            }
}
void print()
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        a[u][v] = w;
        a[v][u] = w;
    }
    update();
    print();
    return 0;
}