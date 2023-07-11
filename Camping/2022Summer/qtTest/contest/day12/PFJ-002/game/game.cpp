#include <bits/stdc++.h>
using namespace std;
const int _ = 1145141;
// 1e6 + 1e5 + 4e4 + 5e3 + 1e2 + 4e1 + 1e0;
int a[_];
int main()
{
    freopen("game.in", "r", stdin);
    freopen("game.out", "w", stdout);
    int n;
    cin >> n;
    // memset(a, 0, sizeof a);
    // int tmp;
    while (~scanf("%d", &n))
    {
        int tmp;
        for (int i = 1; i <= n; i++)
        {
            cin >> tmp;
        }
        if (n == 1 && tmp % 2 == 0)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}