#include <bits/stdc++.h>
using namespace std;
typedef long long llint;
const int K = 20;
int c[114154];
int main()
{
    freopen("xor.in", "r", stdin);
    freopen("xor.out", "w", stdout);
    int n, x;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &x);
        for (int j = 0; j < K; ++j)
            if (x & (1 << j))
                c[j]++;
    }
    // 逐位计算对答案的贡献
    llint ans = 0;
    for (int i = 0; i < K; ++i)
        ans += llint(c[i]) * (n - c[i]) * (1 << i);
    printf("%lld\n", ans);
    return 0;
}