#include <bits/stdc++.h>
using namespace std;

int n, m, L;
int a[2000000];
bool check(int x)
{
    int last = 0; // 上一块石头
    int cnt = 0;  // 移除的石头块数
    for (int i = 1; i <= n; i++)
    {
        if (a[i] - last < x)
        {
            // 太近了
            cnt++;
        }
        else
        {
            last = a[i];
            // 不移除
        }
    }
    return cnt <= m;
}
int main()
{
    cin >> L >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = L; // R的值怎么给？
    sort(a + 1, a + n + 1);
    while (l + 1 < r)
    {
        int mid = (l + r) / 2;
        // l + (r - l) / 2;
        if (check(mid))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    if (check(r))

        cout << r;

    else
        cout << l;
    return 0;
}