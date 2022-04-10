#include <bits/stdc++.h>
using namespace std;
int a[20000000];
int n, m;
bool check(int k)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > m)
        {
            s += (a[i] - m);
            if (s >= m)
                return true;
        }
    }
    return false;
}
int main()
{
    cin >> n >> m;
    int r = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        r = max(r, a[i]);
    }
    int l = 0;
    while (l  < r)
    {
        int mid = (l + r) / 2;
        if (check(mid))
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    if (check(l))
        cout << l;
    else if (check(r))
        cout << r;
    return 0;
}