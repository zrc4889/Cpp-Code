#include <bits/stdc++.h>
using namespace std;
int n, k, x;
const int N = 2e5 + 10;
int a[N];
int main()
{
    cin >> n >> k >> x; // 贪心思想
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        if (k == 0)
            continue;      //没券了！
        if (k >= a[i] / x) //够用
        {
            k -= a[i] / x; //减去最大的
            a[i] %= x;     //剩下
        }
        else
        {
            a[i] -= k * x; //用完它
            k = 0;
        }
    }
    int sum = 0;
    sort(a + 1, a + 1 + n,greater<int>()); // geater<>()函数，从大到小
    // 例如 priority_queue<greater<int>()>
    for (int i = 1 + k; i <= n; ++i) // 1 + k 是为了从大到小用完优惠券
    // 原因：此前都有：a[i]%=x都可以完整使用一张优惠券
        sum += a[i];
    cout << sum;
    return 0;
}