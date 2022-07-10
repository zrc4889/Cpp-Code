#include <bits/stdc++.h>
using namespace std;
int n, k, cnt;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cnt = 0;
        if (n > k)
        {
            cnt = n / k;
            if (n % k != 0)
                cnt++;
            k *= cnt; // 最小倍数
        }
        int ans = k / n; // 每个平均
        if (k % n != 0) // 有余数，加一
            ans++;
        cout << ans << endl;
    }
    return 0;
}