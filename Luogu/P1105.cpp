#include <bits/stdc++.h>
using namespace std;
const int _ = 50 + 10;
int a[_];
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int l, r;
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cin >> l >> r;
    if (sum < l * n || sum > r * n)
        return cout << "-1" << endl, 0;
    int ans1 = 0, ans2 = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < l) // 超出下界，需要加上
            ans1 += (l - a[i]);
        else if (a[i] > r)
            ans2 += (a[i] - r);
    }
    cout << max(ans1, ans2) << endl;
    return 0;
}