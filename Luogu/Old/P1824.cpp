#include <bits/stdc++.h>
using namespace std;
int a[1000010];
int n, c, d;
bool check(int k)
{
    int sum = 0;
    int l = a[1];
    for (int i = 2; i <= n; i++)
    {
        if (a[i] - l < k)
            sum++;
        else
            l = a[i];
        if (sum > d)
            return false;
    }
    return true;
}

int main()
{
    cin >> n >> c;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 1 + n);
    d = n - c;
    int l = 1, r = a[n] - a[1];
    while (l + 1 < r) // 这里二分的是距离
    {
        int mid = (l + r) / 2;
        if (check(mid))
            l = mid;
        else
            r = mid;
    }
    if (check(r))
        cout << r;
    else
        cout << l;
    return 0;
}