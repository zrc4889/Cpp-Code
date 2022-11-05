#include <bits/stdc++.h>
using namespace std;
const int _ = 1001;
int a[_];
// 没过

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    int cnt = 0;
    cin >> n;
    int f = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i + 1])
            f = 0;
    }
    if (f)
        cout << 0 << endl;

    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        while (!(a[i] % 2) && a[i] >= 2)
            a[i] /= 2, cnt++;
        while (!(a[i] % 3) && a[i] >= 3)
            a[i] /= 3, cnt++;
    }
    int flag = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i + 1])
        {
            flag = 0;
        }
    }
    if (!flag)
        cout << -1 << endl;
    else
        cout << cnt << endl;
    return 0;
}