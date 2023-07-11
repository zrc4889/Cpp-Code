#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a > b)
            swap(a, b); // 保证 a<= b
        if (a * 3 < b)
            cout << a << endl;
        // //一人配三人都少的话，那就是少的人数个组，因为一个人配一组
        else
            cout << (a + b) / 4 << endl;
    }
    return 0;
}