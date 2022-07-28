#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int t, m;
} a[100010];
int f[100010];
bool cmp(Node x, Node y)
{
    return x.m > y.m;
}
int main()
{
    freopen("mouse.in", "r", stdin);
    freopen("mouse.out", "w", stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i].t;
    for (int i = 1; i <= n; i++)
        cin >> a[i].m;
    sort(a + 1, a + 1 + n, cmp);
    int sum = 0;
    for (int i = 1; i <= n; i++)
        for (int j = a[i].t; j >= 1; j--)
        {
            if (f[j] == 0)
            {
                f[j] = 1;
                sum += a[i].m;
                break;
            }
        }
    cout << sum << endl;
    return 0;
}