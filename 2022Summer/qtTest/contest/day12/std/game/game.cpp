#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("game.in", "r", stdin);
    freopen("game.out", "w", stdout);
    int n;
    while (~scanf("%d", &n))
    {
        int d;
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &d);
        }
        if (n == 1 && d % 2 == 0)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
