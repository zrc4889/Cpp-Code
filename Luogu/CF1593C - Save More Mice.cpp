#include <bits/stdc++.h>
using namespace std;
const int N = 4e5 + 10;
int a[N], n, m, sum, ans = 0;

int solve()
{
    cin >> n >> m;
    for (int i = 1; i <= m; ++i)
        scanf("%d", &a[i]), a[i] = n - a[i];

    sort(a + 1, a + m + 1);
    long long sum = 0;
    for (int i = 1; i <= m; ++i)
    {
        sum += a[i];
        if (sum == n - 1)
        {
            return i;
        }
        else if (sum >= n)
        {
            return i - 1;
        }
    }
    return m;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        printf("%d\n", solve());
}