#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[3];
// 滚动数组
signed main()
{
    int n, x;
    int num = 0, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[2]; // 后一天
        if (a[2] >= a[1])
        {
            x++;
            num = max(num, x);
        }
        else
        {
            x = 1;
        }
        a[1] = a[2]; //后事
    }
    cout << sum << endl;
    return 0;
}