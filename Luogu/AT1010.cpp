#include <bits/stdc++.h>
using namespace std;
int n, m, a, sum = 0; // 定义在函数外，默认为0，sum可以不赋值
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        // 依题意，二进制从低到高第i位是 >> i，反之亦然
        sum += ((m >> i) & 1 ? a : 0); // 一个三目运算，等价于一个if语句
    }
    cout << sum << endl; // 注意要加上endl
    return 0;
}
