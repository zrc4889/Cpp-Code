#include <bits/stdc++.h>
using namespace std;
int t, n, m, T, cnt[1000006], a[500005], ansl = 1, ansr = 1;
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1, l = 1, r = 1; i <= n; ++i)
    {
        r = i;
        cnt[a[i]]++;
        if (cnt[a[i]] == 1)
            t++;
        while (t > m)
        {
            cnt[a[l]]--;
            if (cnt[a[l]] == 0)
                t--;
            l++;
        }
        if (r - l > ansr - ansl)
            ansr = r, ansl = l;
    }
    cout << ansl << " " << ansr;
}