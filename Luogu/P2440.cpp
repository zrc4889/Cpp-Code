#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[1000005];

bool check(int x)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans += a[i] / x; // 切
    return ans >= k;     // 是否大于k满足条件？
}

int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    int l = 0;
    int r = 2147483647; // INT_MAX

    while (l + 1 < r)
    {
        int mid = l + (r - l) / 2;
        if (check(mid))
            l = mid;
        else
            r = mid; // 基本框架
    }
    cout << l << endl; // 最小
    return 0;
}