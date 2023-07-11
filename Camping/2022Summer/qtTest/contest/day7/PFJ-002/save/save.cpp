#include <bits/stdc++.h>
using namespace std;
int a[6] = {1, 8, 57, 400, 2801, 18888};
// 前缀和
int main()
{
    freopen("save.in", "r", stdin);
    freopen("save.out", "w", stdout);
    int n;
    cin >> n;
    for (int i = 0; i <= 6; i++)
    {
        if (n <= a[i])
            return cout << i + 1 << endl, 0;
        else
            continue;
    }
    // cout << i - 1;
    return 0;
}