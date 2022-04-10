#include <bits/stdc++.h>
using namespace std;
bool check (int k)
{
    
    return 0;
}
int main
{
    int n, m, L;
    cin >> L >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = L; // R的值怎么给？
    sort(a + 1, a + n + 1);
    while (l + 1 < r)
    {
        int mid(l + r) / 2;
        if (check(mid))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    if (check(r))

        cout << r;

    else
        cout << l;
    return 0;
}