#include <bits/stdc++.h>
#define int long long
/*XYC YYDS*/
/*cookiebus YYDS
/*nullptr YYDS*/
/*tree_one_ YYDS*/
/*PinkRabbit YYDS*/
/*Eternity YYDS*/
/*yuxinhao YYDS*/
/*_ YYDS*/
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
signed main()
{
    freopen("toy.in", "r", stdin);
    freopen("toy.out", "w", stdout);
    int a, b, c, d;
    cin >> a >> c >> b >> d;
    // c, d 边数
    // a, b 边长
    // 小模拟？
    int t; // 移动第几边
    // 当 t == d 时
    int pr;
    // if (gcd(c, d) == 1)
    //     pr = max(c, d);
    // else
    pr = lcm(c, d); // 轮数
    int st = 0;
    int tmp;
    // 先考虑是倍数的情况
    if (b % a == 0)
    {
        tmp = b / a;
        t = pr * tmp;
        cout << t;
    }
    else
    {
        // 若非倍数
        tmp = ((a - (b - a)) + 1) * 2;
        t = pr * tmp;
        cout << t;
    }
    // 边可容纳

    return 0;
}