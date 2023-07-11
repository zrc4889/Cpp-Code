#include <bits/stdc++.h>
#define int long long
using namespace std;
int m;
int h1, a1, x_1, y_1;
int h2, a2, x_2, y_2;
int gcd(int a, int b) // gcd 求最小公倍数
{
    int c = 1; // 余数
    if (a < b) // 保证 a>b 才能除
        swap(a, b);
    while (c)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}
// int a_1[114514], a_2[114514];
signed main()
{
    freopen("change.in", "r", stdin);
    freopen("change.out", "w", stdout);
    int T;
    cin >> T;

    while (T--)
    {
        cin >> m;
        cin >> h1 >> a1;
        cin >> x_1 >> y_1;
        cin >> h2 >> a2;
        cin >> x_2 >> y_2;
        /*XYC YYDS*/
        /*cookiebus YYDS
        /*nullptr YYDS*/
        /*tree_one_ YYDS*/
        /*PinkRabbit YYDS*/
        /*Eternity YYDS*/
        /*yuxinhao YYDS*/
        /*_ YYDS*/
        int t1 = h1, t2 = h2;
        int s1, s2;
        int t = 1;
        // 特判除不到
        if (a1 >= m || a2 >= m)
        {
            cout << -1 << endl;
            break;
        }

        while (t)
        {

            if (t1 == a1 && t != 1)
            {
                s1 = t;
                t = 0;
            }
            else
            {
                t1 = (x_1 * t1 + y_1) % m;
                t++;
            }
        }
        s1--;
        t = 1;
        while (t)
        {
            if (t2 == a2 && t != 1)
            {
                s2 = t;
                t = 0;
            }
            else
            {
                t2 = (x_2 * t2 + y_2) % m;
                t++;
            }
        }
        s2--;
        // cout << s1 << endl
        //      << s2 << endl;
        cout << lcm(s1, s2) << endl;
    }
    /*XYC YYDS*/
    /*cookiebus YYDS
    /*nullptr YYDS*/
    /*tree_one_ YYDS*/
    /*PinkRabbit YYDS*/
    /*Eternity YYDS*/
    /*yuxinhao YYDS*/
    /*_ YYDS*/
    return 0;
}