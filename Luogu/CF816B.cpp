#include <bits/stdc++.h>
using namespace std;

const int _ = 200000;
int a[_], b[_], ans[_];

int main()
{
    // start here..
    int n, k, m;
    cin >> n >> k >> m;
    for (int i = 1; i <= n; i++)
    {
        int l, r;
        cin >> l >> r;
        a[l]++, a[r + 1]--;
        // l ~ r 区间加上 1
    }

    for (int i = 1; i <= 200000; i++)
    {
        // 遍历每一个温度
        b[i] = b[i - 1] + a[i]; // ?
        
        if (b[i] >= k)
            ans[i] = ans[i - 1] + 1;
        else
            ans[i] = ans[i - 1];
    }

    while (m--)
    {
        int l, r;
        cin >> l >> r;
        cout << ans[r] - ans[l - 1] << endl;;
    }

    return 0;
}