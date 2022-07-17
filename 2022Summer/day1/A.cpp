#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 10;
char a[maxn];
int check(char x)
{
    // 1 数字 
    // 0 - 或 .
    if (x == '0' || x == '1' || x == '2' ||
        x == '3' || x == '4' || x == '5' ||
        x == '6' || x == '7' || x == '8' ||
        x == '9')
        return true;
    else
        return false;
}
int main()
{
    cin >> a;
    cout << a;
    // 假设都合法
    for (int i = 0; i < n; ++i)
    {
        if (check(a[i]))
        {
            if (check(a[i + 1])) // 看看下一个是不是
        }
    }
    return 0;
}