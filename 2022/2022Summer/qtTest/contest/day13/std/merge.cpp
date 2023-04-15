#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define N 1000005
using namespace std;
int stk[N];
int main()
{
    freopen("merge.in", "r", stdin);
    freopen("merge.out", "w", stdout);
    LL ans = 0;
    int n, i;
    scanf("%d", &n);
    int top = 0;
    for (i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);
        while (x >= stk[top] && top)
        {
            if (x >= stk[top - 1] && top > 1) //比再前一个数大的话就先把以前的合并完
                ans += stk[top - 1];
            else
                ans += x; 
            top--;
        }
        stk[++top] = x;
    }
    while (top != 1)
    {
        ans += stk[top - 1];
        top--;
    }
    printf("%lld", ans);
}
