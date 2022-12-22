#include <bits/stdc++.h>
#define int long long
using namespace std;
const int _ = 100001;
int a[_], len[_];

signed main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int cur = a[1];
    int cnt = 1;
    for (int i = 2; i <= n; i++)
    {
        if (a[i] == cur)
            len[cnt]++;
        else
            cur = a[i], cnt++;
    }
    for (int i = 1; i < cnt; i++)
        if (len[i] != len[i + 1])
            return cout << "NO" << endl, 0;

    return cout << "YES" << endl, 0;
    // 可以使用这种方法
}