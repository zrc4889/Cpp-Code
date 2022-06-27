#include <bits/stdc++.h>
using namespace std;
int a[100005];
int n, M;
bool check(int m)
{
    int cnt = 1, sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (sum + a[i] <= m)
            sum += a[i];
        else
        {
            cnt++;
            sum = a[i];
        }
    }
    return cnt <= M;
}

int main()
{
    int l = 0, r = 0;
    cin >> n >> M;
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &a[i]);
        l = max(l, a[i]);
        r += a[i];
    }
    while (l + 1 < r)
    {
        int mid = (l + r) / 2;
        if (check(mid))
            r = mid;
        else
            l = mid;
    }
    if (check(l))
        cout << l;

    else if (check(r))
        cout << r;
    else
        cout << -1;
    return 0;
}