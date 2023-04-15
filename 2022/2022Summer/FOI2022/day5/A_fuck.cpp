#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, A, b, c, d;
// int a[]
const int _ = 1e6 + 10;
int a[_];
// bool cmp(int x, int y)
// {
// return x > y;
// }
signed main()
{
    cin >> n;
    int m = 4 * n;
    for (int i = 1; i <= m; i++)
        cin >> a[i];
    cin >> A >> b >> c >> d;
    for (int i = 1; i <= m; i += 4)
        a[i] += A;
    for (int i = 2; i <= m; i += 4)
        a[i] += b;
    for (int i = 3; i <= m; i += 4)
        a[i] += c;
    for (int i = 4; i <= m; i += 4)
        a[i] += d;
    sort(a, a + m, greater<int>());
    for (int i = 1; i <= m; i += 4)
        if (i % 6 == 1)
            cout << a[i] << ' ';
}