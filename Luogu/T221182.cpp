#include <bits/stdc++.h>
using namespace std;
struct node
{
    int date;
    string s;
    int change;
};
bool cmp(node x, node y)
{
    return x.date < y.date;
}
node a[1010];
bool b[4], c[4];
int n, m = 7, e = 7, B = 7, ans;
int main()
{
    cin >> n;
    int maxn = 7;
    b[1] = 1, b[2] = 1, b[3] = 1;
    for (int i = 1; i <= n; ++i)
        cin >> a[i].date >> a[i].s >> a[i].change;
    sort(a + 1, a + 1 + n, cmp);
    for (int i = 1; i <= n; i++)
    {
        if (a[i].s == "Mildred")
            m += a[i].change;
        else if (a[i].s == "Elsie")
            e += a[i].change;
        else if (a[i].s == "Bessie")
            B += a[i].change;
        maxn = max(max(m, e), B);
        if (maxn == m)
            c[1] = 1;
        else
            c[1] = 0;
        if (maxn == e)
            c[2] = 1;
        else
            c[2] = 0;
        if (maxn == B)
            c[3] = 1;
        else
            c[3] = 0;
        bool p = 1;
        for (int i = 1; i <= 3; i++)
        {
            if (c[i] != b[i])
                p = 0, b[i] = c[i];
        }
        if (!p)
            ans++;
    }
    cout << ans;
    return 0;
}