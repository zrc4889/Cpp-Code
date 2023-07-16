#include <bits/stdc++.h>
using namespace std;
const int _ = 201;
char s[_], k[_];
int main()
{
    cin >> s;
    int l = strlen(s) - 1;
    int i = 0;
    while (s[i++] == '9')
    {
        if (i = l + 1)
        {               // 如果全部的数字都是 9
            s[0] = '1'; // 第一位改成 1
            for (l++; i > 0; i--)
                s[i] = '0'; // 其他位改成 0
            // 总体代码思路即：999 不妨转换成 1000 来算
        }
    }
    for (i = 0; i <= l - i; i++) k[i] = k[l - i] = s[i];
    // cout << s << endl;
    if (strcmp(k, s) <= 0) // 比较字符串
    {
        // 如果小于或者等于原数
        while (k[--i] == '9')
            ;
        // 变次边位比中卫跟划算
        k[i] = k[l - i] = ++k[i];
        for (i++; i <= l - i; i++)
            k[i] = k[l - i] = '0'; // 其余添上0
    }
    cout << k;
    return 0;
}