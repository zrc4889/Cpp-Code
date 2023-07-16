#include <bits/stdc++.h>
using namespace std;
const int _ = 114514;
int a[_];
bool cmp(int x, int y)
{
    return x > y;
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    // 一个简单的贪心
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + n, cmp);
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += a[i];
    int i = 1;
    while (sum % 2 && a[i++] % 2)
        sum -= a[i];
    cout << sum;
    return 0;
}