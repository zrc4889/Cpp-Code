#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int d1, d2; // 存储距离
int main()
{
    cin >> a >> b >> c;
    d1 = b - a - 1;
    d2 = c - b - 1; // 求两个的距离
    if (d1 == 0 && d2 == 0)
    {
        cout << 0 << endl
             << 0; // 已完成排序，输出0
    }
    else if (d1 == 1 || d2 == 1) // 1 3 5
    {
        cout << 1 << endl; // 两头牛之间有空位，最短为1
        // cout << d2;
        if (d1 - d2 > 0) // 1 3 6
        {
            // 判断是左边大还是右边大
            cout << d1;
        }
        else // 6 9 11
        {
            cout << d2;
        }
    }
    else
    {
        // Default
        cout << 2 << endl; // 114 514 1919810 -> 513 514 515
        // cout << d1;
        if (d1 - d2 > 0)
        {
            cout << d1; // 第一段比第二段大
        }
        else
        {
            cout << d2; // 第一段比第二段小
        }
    }
}