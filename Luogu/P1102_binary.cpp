#include <bits/stdc++.h>
using namespace std;
const int _ = 2e5 + 10;
int a[_];
int n, k;

int solve1(int x)
{
    int l, r;
    l = 1, r = n;
    while (l < r)
    {
        int mid = (l + r) >> 1;
        if (a[mid] >= x)
            r = mid;
        else
            l = mid + 1;
    }
    if (a[l] != x)
        return -1;
    return l;
}

int solve2(int x)
{
    int l, r;
    l = 1, r = n;
    while (l < r)
    {
        int mid = (l + r + 1) >> 1;
        if (a[mid] <= x)
            l = mid;
        else
            r = mid - 1;
    }
    if (a[l] != x)
        return -1;
    return l;
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + n);
    typedef long long llint;
    llint cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        int x = a[i] - k; // B = A - C
        if (x < 1)
            continue;
        // 无论怎么找都找不到，算是一个小优化
        int l = solve1(x);
        if (l == -1)
            continue;
        int r = solve2(x);
        int len = r - l + 1;
        // 这个区间里面所有的数字都可行
        cnt += len;
    }
    cout << cnt << endl;
    return 0;
}