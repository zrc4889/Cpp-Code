#include <bits/stdc++.h>
using namespace std;
const int _ = 2e5 + 10;
struct Point
{
    int x, y; // 坐标
    char d;   // 方向
} p[_];
int n;
bool cmp(Point a, Point b)
{
    return a.y < b.y || a.y == b.y && a.x < b.x;
}
int main()
{
    // #ifdef LOCAL
    //     LOCALfo
    // #endif
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> p[i].x >> p[i].y;
    for (int i = 1; i <= n; ++i)
        cin >> p[i].d;
    sort(p + 1, p + 1 + n, cmp);
    int last = -1;
    for (int i = 1; i <= n; ++i)
    {
        if (p[i].d == 'R')
            last = p[i].y;
        else if (last == p[i].y)
            return cout << "Yes" << endl, 0;
    }
    cout << "No" << endl;
    return 0;
}