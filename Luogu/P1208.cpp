#include <bits/stdc++.h>
using namespace std;
int n, m;
const int _ = 2e6 + 10;
struct FARMER
{
    int p, v;
    // p 单价 v 牛奶量
} a[_];
inline bool cmp(FARMER x, FARMER y)
{
    // if (x.p == y.p) return x.v > y.v;3
    return x.p < y.p;
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i].p >> a[i].v;
    sort(a + 1, a + 1 + m, cmp);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n - a[i].v <= 0)
        {
            sum += n * a[i].p;
            break;
        }
        else
        {
            sum += a[i].v * a[i].p;
            n -= a[i].v;
        }
    }
    cout << sum << endl;

    return 0;
}