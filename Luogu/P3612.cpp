#include <bits/stdc++.h>
using namespace std;
string s;
long long n;
long long l;
int main()
{
    cin >> s >> n;
    l = s.size(); // 获得长度
    long long a = l; // 原字符串长度
    while (l < n)
        l = l * 2;
    l = l / 2;
    while (n > a) // 只有一个字符就直接输出
    {
        if (n == l)
            n = n / 2;
        else if (n - l > 1)
            n = n - l - 1; // 递归回上一个字符串

        else if (n - l == 1) // 第一个
            n = l;

        l /= 2; // 切一半

    }
    printf("%c", s[n - 1]);
    return 0;
}