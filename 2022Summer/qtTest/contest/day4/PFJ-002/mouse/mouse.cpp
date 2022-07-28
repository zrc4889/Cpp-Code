#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int time;
    int score;
} a[1005];
bool cmp(Node x, Node y)
{
    return x.time < y.time;
}

int main()
{
    // #ifdef LOCAL
    //     LOCALfo
    // #endif
    freopen("mouse.in", "r", stdin);
    freopen("mouse.out", "w", stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i].time;
    for (int i = 1; i <= n; ++i)
        cin >> a[i].score;
    // 时间最短的先打
    sort(a + 1, a + 1 + n, cmp);
    int ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        ans += a[i].score;
    }
    cout << ans;
    return 0;
}