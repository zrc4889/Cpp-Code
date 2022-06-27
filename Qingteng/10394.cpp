#include <bits/stdc++.h>
using namespace std;
long long ans = 0;
int a[500005], b[500005];
int n;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        b[i] = a[i] - i + 1;
    }
    sort(b + 1, b + n + 1); // 找中位数
    int x = b[(n + 1) / 2]; // 奇数选择
    ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        ans += abs(a[i] - (x + i - 1));
    }
    cout << ans << endl;
    return 0;
}