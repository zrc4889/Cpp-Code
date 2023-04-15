#include <bits/stdc++.h>
#define int long long
const int _ = 1e6 + 10;
using namespace std;
int stk[_]; // 单调栈 + 贪心
signed main()
{
    freopen("merge.in", "r", stdin);
    freopen("merge.out", "w", stdout);
    int ans = 0;
    int n, i;
    cin >> n;
    int top = 0;
    for (i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        while (x >= stk[top] && top)
        {
            if (x >= stk[top - 1] && top > 1) // 比再前一个数大的话就先把以前的合并完
                // 大于栈顶且非栈非一个元素
                ans += stk[top - 1]; // 单调栈一定是top越大元素值越大
            else
                ans += x; // 否则直接加上最大值
            top--; // 弹出
        }
        stk[++top] = x;
    }
    while (top != 1)
    {
        ans += stk[top - 1];
        top--;
    }
    cout << ans;
    return 0;
}