#include <bits/stdc++.h>
using namespace std;
const int _ = 1e5 + 10;
int a[_], n;
int main()
{
    freopen("opt.in", "r", stdin);
    freopen("opt.out", "w", stdout);
    int T;
    cin >> T;
    while (T--)
    {
        memset(a, 0, sizeof a);
        // 首要地，判定是否无解地条件为，相邻元素最初已经有相等的
        cin >> n;
        int sum = 0;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % n)
        {
            cout << -1 << endl; // 判定无解
            continue;
        }
        
    }
    return 0;
}