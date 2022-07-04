#include <bits/stdc++.h>
using namespace std;
//判断k+a是否大于m，如果大于，ans要加1，然后a独立为一段；如果小于等于，k就要加上a
int main()
{
    int k = 0, n, m;
    int ans = 1; // ans 初值为一，因为
    cin >> n >> m;
    while (n--)
    {
        int temp;
        cin >> temp;
        if (k + temp > m) // 大于预期的值 
        {
            ans++; // 段数加一
            k = temp; // 从当前读入的这个数重新开始
        }
        else
        {
            k += temp; // 还没有超过就继续相加
        }
    }
    cout << ans;
    return 0;
}