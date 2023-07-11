#include <bits/stdc++.h>
using namespace std;
const int _ = 11451419;
int f[_];
int n, m;
int find(int k)
{
    if (f[k] == k)
        return k;
    return f[k] = find(f[k]); // 路径压缩
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int p;
    cin >> n >> m >> p;
    for (int i = 1; i <= n; i++)
        f[i] = i;
    int x, y, c;
    for (int i = 1; i <= m; i++)
    {
        cin >> y >> c;
        // if (x == 1)
        f[find(y)] = find(c);
        // else if (find(y) == find(c))
        //     cout << "Yes" << endl;
        // else
        //     cout << "No" << endl;
    }
    while (p--)
    {
        cin >> x >> y;
        if (find(x) == find(y))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}