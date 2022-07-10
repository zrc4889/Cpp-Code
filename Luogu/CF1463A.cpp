#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        int temp = sum / 9;
        if (a < temp || b < temp || c < temp) // 为什么加特判？
            cout << "NO" << endl;
        else if (sum % 9 == 0) // 刚好完成增强版
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}