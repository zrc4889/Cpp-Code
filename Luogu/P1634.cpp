#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int ans = 1; // ans 定义为禽兽
    int n, x;
    cin >> x >> n;
    for (int i = 0; i < n; i++)
    {
        // ans += i * i * x;
        ans = ans + ans * x;
    }
    cout << ans << endl;
    return 0;
}