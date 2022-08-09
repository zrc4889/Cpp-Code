#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s;
    s = 0;
    cin >> n;
    while (n)
    {
        s = s * 10 + n % 10;
        n /= 10; // 类似于数位分离的做法
    }
    cout << s;
    return 0;
}