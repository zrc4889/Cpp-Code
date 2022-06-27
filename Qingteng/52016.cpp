#include <bits/stdc++.h>
using namespace std;
int n, a, b;
int h[100005];
bool check(int x)
{
    int s = x;
    for (int i = 1; i <= n; ++i)
    {
        int d = h[i] - x * b; // 最大能造成多少伤害
        if (d <= 0)
            continue;          // die了
        s += abs(d) / (a - b); // A-B补上伤害
        // d 为什么要加abs？
        if (abs(d) % (a - b) != 0)
            s++; // ？？？
    }
    return s <= x;
}
int main()
{
    cin >> n >> a >> b;
    for (int i = 1; i <= n; ++i)
    {
        cin >> h[i];
    }
    int l = 1, r = ;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (check(mid))
        {
            r = mid;
        }
        else
            l = mid;
    }
    if (check(l))
        cout << l;
    else if (check(r))
        cout << r;
    return 0;
}