#include <bits/stdc++.h>
using namespace std;
const int _ = 2e5 + 10;
struct Node
{
    int x;
    /*XYC YYDS*/
    int h;    // 身高
    int f;    // 愿意和高 or 和低
    bool vis; // 标记
} a[_];       // 整合到一个线性表里面
bool cmp(Node x, Node y)
{
    return x.h < y.h; // 高度从小到大
}
int main()
{
    // #ifdef LOCAL
    // LOCALfo
    // #endif
    freopen("dance.in", "r", stdin);
    freopen("dance.out", "w", stdout);
    int n;
    int tmp;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> tmp;
        if (tmp < 0)
        {
            a[i].h = -tmp;
            a[i].f = -1; // 低
            a[i].x = 1;
        }
        else if (tmp >= 0)
        {
            a[i].h = tmp;
            a[i].f = 1; //高
            a[i].x = 1;
        }
        /*XYC YYDS*/
    }
    for (int i = n + 1; i <= 2 * n; i++)
    {
        cin >> tmp;
        if (tmp < 0)
        {
            a[i].h = -tmp;
            a[i].f = -1;
            a[i].x = -1;
        }
        else if (tmp >= 0)
        {
            a[i].h = tmp;
            a[i].f = 1;
            a[i].x = -1;
        }
    }
    int ans = 0;
    sort(a + 1, a + 1 + n + n, cmp);
    for (int i = 1; i <= 2 * n; i++) // 此for循环仅考虑从小到大
        for (int j = i + 1; j <= 2 * n; j++)
        {
            if (a[i].x == -1 && a[i].vis == 0) // 女
            {
                if (a[i].f == 1 && a[j].f == -1 && a[j].x == 1 && a[j].vis == 0)
                {
                    ans++;
                    a[j].vis = 1;
                    a[i].vis = 1;
                    cout << i << " " << j << endl;
                }
            }
            else if (a[i].x == 1 && a[i].vis == 0)
            {
                // 男
                if (a[i].f == 1 && a[j].f == -1 && a[j].x == -1 && a[j].vis == 0)
                {
                    ans++;
                    a[j].vis = 1;
                    a[i].vis = 1;
                    cout << i << " " << j << endl;
                }
            }
        }
    cout << ans << endl;
    return 0;
}