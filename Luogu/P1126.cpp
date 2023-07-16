#include <bits/stdc++.h>
#define int long long // 最好的修改方法
using namespace std;

int qPow(int a, int b, int c)
{
    if (a == 0)
        return 0;
    if (b == 0)
        return 1 % c;
    int t = qPow(a, b / 2, c); // 把指数分半（再分半）
    t = t * t % c;
    if (b % 2) // 如果是奇数的话
        t = t * a % c;
    return t; // 返回结果
}
signed main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << a << "^" << b << " mod " << c << "=" << qPow(a, b, c);
    // system("pause");
    return 0;
}