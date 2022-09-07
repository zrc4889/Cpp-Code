#include <bits/stdc++.h>
const int _ = 100 + 10;
// int f[_], g[_][_];
using namespace std;
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    int zh, c;
    zh = c = 0;
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= m; j++)
            for (int z = i + 1; z <= n; z++)
                for (int l = j + 1; l <= m; l++)
                {
                    int t1 = z - i;
                    int t2 = l - j;
                    if (t1 == t2)
                        zh++;
                    else
                        c++;
                }
    cout << zh << ' ' << c << endl;
    return 0;
}