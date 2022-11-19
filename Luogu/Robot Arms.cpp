#include <bits/stdc++.h>
using namespace std;

struct Bot
{
    int l, r;
} a[114514];

bool cmp(Bot a, Bot b)
{
    return a.r < b.r;
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x, l;
        cin >> x >> l;
        a[i].l = x - l, a[i].r = x + l;
    }
    sort(a + 1, a + n + 1, cmp);

    int now = a[1].r, cnt = 1;

    // 先放一个机器人
    for (int i = 2; i <= n; i++)
    {
        if (a[i].l >= now)
        {
            cnt++;
            // 放一个机器人
            now = a[i].r;
            // 更新值
        }
    }
    cout << cnt << endl;

    return 0;
}