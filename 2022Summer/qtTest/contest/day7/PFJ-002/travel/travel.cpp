#include <bits/stdc++.h>
// #define int long long
using namespace std;
// #define mabs(int x) x < 0 ? -x : x;
int n, m;
const int _ = 6000 + 5;
bool portal[_]; // 记录是否可传送至
struct F
{
    int x;
    int y;
    // bool portal;
} a[_];
int mmin(int a, int b)
{
    return a > b ? b : a;
}
int mabs(int x)
{
    return x < 0 ? -x : x;
}
int f(F x, F y)
{
    return mabs(x.x - y.x) + mabs(x.y - y.y);
}
int qto(F x, F y)
{
    // 直连的情况
    return f(x, y);
}
int pto(F x, F y)
{
    int Min = 114514;
    // 使用传送门
    for (int i = 1; i <= n; i++)
    {
        if (portal[i] == true)
        {
            // mmin = min(f(a[i], x))
            // 有一个传送门
            // 先记录传送门条件下的最短距离
            // 最好不要从一个传送门到另一个传送门
            Min = mmin(Min, f(a[i], y));
        }
    }
    Min = mmin(qto(x, y), Min);
    return Min;
}
signed main()
{
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    cin >> n >> m;
    // F a, b;
    // a.x = a.y = 1;
    // b.x = b.y = -1;
    // cout << f(a, b);
    // 曼哈顿距离
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].x >> a[i].y;
    }
    for (int i = 1; i <= m; i++)
    {
        int tmp;
        cin >> tmp;
        portal[tmp] = true;
    }
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        ans += pto(a[i], a[i + 1]);
    }
    cout << ans;
    // cout << pto(a[1], a[2]);
    // 考虑：直连、传送门距离
}