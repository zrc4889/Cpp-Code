#include <bits/stdc++.h>
using namespace std;
int bit[10], n, m;
int main()
{
    cin >> n >> m;
    for (int i = n; i <= m; i++)
    {
        for (int tmp = i; tmp; tmp /= 10)
            // 1、tmp取值
            // 2、tmp不为0
            // 3、tmp每次/=10
            // 4、tmp%10就是个位数
            // 成功完成数位分离
            bit[tmp % 10]++;
    }
    for (int i = 0; i <= 9; i++)
        cout << bit[i] << ' ';
    return 0;
}