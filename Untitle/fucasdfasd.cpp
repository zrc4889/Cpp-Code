#include <bits/stdc++.h>
using namespace std;
const int N = 114514;
bool a[N];
int n;
void pd(int x)
{
    memset(a, 1, sizeof(a));
    a[0] = a[1] = 0;
    for (int i = 2; i <= x; i++)
    {
        if (!a[2])
            continue;
        else
        {
            for (int j = i * 2; j <= x; j += i)
            {
                a[j] = 0;
            }
        }
    }
}
signed main()
{
#ifdef LOCAL
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
#endif
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        pd(x);
        if (a[x])
            cout << x << " ";
    }
    return 0;
}