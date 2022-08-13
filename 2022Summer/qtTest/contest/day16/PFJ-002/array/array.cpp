#include <bits/stdc++.h>
using namespace std;
int check0()
{
    int ans = 0;
    for (int i = 2; i < n; i++)
    {
        if (a[i] == 0)
            ans++;
    }
    return ans;
}
int main()
{
    // #ifdef LOCAL
    // LOCALfo
    // #endif
    freopen("array.in", "r", stdin);
    freopen("array.out", "w", stdout);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    // 最大公约数
    // 等高线类似的做法
    // 查找有几个零
    int ans = 0;
    int op;
    op = check0();
    return 0;
}