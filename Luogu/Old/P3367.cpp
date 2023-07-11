#include <bits/stdc++.h>
using namespace std;
int f[11451419];
int n, m;
int find(int k)
{
    // 找爹函数
    if (f[k] == k)
        return k;
    return f[k] = find(f[k]); // 路径压缩记忆
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        f[i] = i;
    // f[i] 为其老大
    int x, y, c;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y >> c;
        if (x == 1)
            // 加入集合
            f[find(y)] = find(c);
        else if (find(y) == find(c))
        {
            cout << "Y" << endl;
        }
        else
            cout << "N" << endl;
    }
    return 0;
}