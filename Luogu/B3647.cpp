#include <bits/stdc++.h>
using namespace std;

const int N = 210, INF = 1e9;

int n, m, Q;
int d[N][N];

void floyd()
{
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >>
        n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                d[i][j] = 0;
            else
                d[i][j] = INF;
        }
    while (m--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        d[a][b] = min(d[a][b], w); // 路劲压缩
        d[b][a] = min(d[b][a], w);
    }
    floyd();
    for (int a = 1; a <= n; a++)
    {
        for (int b = 1; b <= n; b++)
            if (d[a][b] > INF / 2)
                cout << 0 << " ";
            else
                cout << d[a][b] << " ";
        cout << endl;
    }
}
// floyd();
