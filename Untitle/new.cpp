#include <bits/stdc++.h>
using namespace std;
// int a[114514];
struct F
{
    double num;
    int p;
} f[114514];
bool cmp(F x, F y)
{
    // if (x.num == y.num) return x.p > y.p;
    // else return x.num < y.num;
    return x.num < y.num;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1, j = 1; i <= n; i++)
    {
        cin >> f[i].num;
        f[j++].p = j;
    }
    sort(f, f + n, cmp);
    // int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cout << f[i].p << " ";
    }
    double sum = 0;
    double ans = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += f[i].num;
        ans += sum;
    }
    ans /= n * 1.0;
    printf("\n%.2f", ans);
    return 0;
}