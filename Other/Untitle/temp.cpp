#include <bits/stdc++.h>
using namespace std;

int n, k;
int d, x, y;
int ans = 0;
const int _ = 150001;
int fa[_];

int find(int x)
{
    if (fa[x] == x)
        return x;
    return fa[x] = find(fa[x]);
}

void merge(int a, int b)
{
    int ra = find(a);   
    int rb = find(b);
    fa[ra] = rb;
}

int main()
{
    // start here..

    cin >> n >> k;

    for (int i = 1; i <= 3 * n; ++i)
        fa[i] = i;

    for (int i = 1; i <= k; ++i)
    {
        cin >> d >> x >> y;
        if (x < 1 || x > n || y < 1 || y > n)
        {
            ans++;
            continue;
        }
        if (d == 1)
        {
            if (find(x) == find(y + n) || find(x) == find(y + 2 * n))
                ans++;
            else
            {
                merge(x, y);
                merge(x + n, y + n);
                merge(x + 2 * n, y + 2 * n);
            }
        }
        else if (d == 2)
        {
            if (find(x) == find(y) || find(x) == find(y + n))
                ans++;
            else
            {
                merge(x, y + 2 * n);
                merge(x + n, y);
                merge(x + 2 * n, y + n);
            }
        }
    }

    cout << ans << endl;

    return 0;
}