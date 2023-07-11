#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int a[10001] = {0}, b[10001] = {0};
    int n;
    cin >> n;
    a[0] = 1, b[0] = 1;
    for (i = 2; i <= n; i++)
    {
        for (j = 0; j < 100; j++)
        {
            b[j] *= i;
        }
        for (j = 0; j < 100; j++)
        {
            if (b[j] > 9)
            { //这里可有可无
                b[j + 1] += b[j] / 10;
                b[j] %= 10;
            }
        }
        for (j = 0; j < 100; j++)
        {
            a[j] += b[j];
            //相加并处理进位
            if (a[j] > 9)
            {
                a[j + 1] += a[j] / 10;
                a[j] %= 10;
            }
        }
    }
    for (i = 100; i >= 0 && a[i] == 0; i--)
        ;
    for (j = i; j >= 0; j--)
        cout << a[j];
}