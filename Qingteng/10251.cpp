#include <bits/stdc++.h>
using namespace std;

struct node
{
    int fir, sec;
} a[11451];

bool cmp(node x, node y)
{
    if (x.fir == y.fir)
        return x.sec < y.sec;
    return x.fir < y.fir;
}
int f[11451], maxx = -1;

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].fir >> a[i].sec;
    }

    sort(a + 1, a + 1 + n, cmp);

    for (int i = 1; i <= n; i++)
    {
        f[i] = a[i].sec - a[i].fir;
        for (int j = 0; j < i; j++)
        {
            if (a[j].sec < a[i].fir)
            {
                f[i] = max(f[i], f[j] + (a[i].sec - a[i].fir + 1));
            }
        }
        maxx = max(maxx, f[i]);
    }

    cout << maxx << endl;

    return 0;
}