#include <bits/stdc++.h>
using namespace std;
int n, b[1010], ans = 0;
struct cow
{
    int l, r, cnt;
} a[110];
bool cmp(cow x, cow y)
{
    return x.cnt < y.cnt; // Compare cnt
}
int main()
{
    cin >> n;
    memset(a, 0, sizeof(a)), memset(b, 0, sizeof(b));
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i].l >> a[i].r;
        for (int j = a[i].l; j < a[i].r; j++)
        {
            b[j]++;
        }
    }
    for (int i = 0; i <= 1000; i++)
        if (b[i] > 0)
            ans++; // 有人在的
    for (int i = 1; i <= n; i++)

        for (int j = a[i].l; j < a[i].r; j++)
            if (b[j] == 1)
                a[i].cnt++;
    sort(a + 1, a + n + 1, cmp);
    cout << ans - a[1].cnt << endl;
    return 0;
}