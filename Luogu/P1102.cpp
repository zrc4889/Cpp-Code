#include <bits/stdc++.h>
using namespace std;
int n, c;
long long ans;
map<int, int> a;
int num[200005];
int main()
{
    cin >> n >> c;
    for (int i = 1; i <= n; ++i)
    {
        cin >> num[i];
        a[num[i]]++; // 统计数字出现的个数
    }
    for (int i = 1; i <= n; ++i)
    {
        ans += a[num[i] + c]; // 出现多少个就有多少解法
    }
    cout << ans << endl;
    return 0;
}