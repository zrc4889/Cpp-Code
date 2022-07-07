#include <bits/stdc++.h>
#define int __int128
using namespace std;
const int N = 1e6 + 10;
bool prime[N];
int p[N], cnt = 0, ans = 0;
void write(int x)
{
    if (x >= 10)
        write(x / 10);
    long long y = x % 10;
    cout << y;
}
signed main()
{
    long long n;
    cin >> n;
    int M = 1;
    while (M * M * M <= n)
        M++;
    M--; // 三次方
    for (int i = 2; i <= M; ++i)
    {
        if (!prime[i])
        {
            p[++cnt] = i;
        }
        for (int j = 1; j <= cnt && i * p[j] <= M; ++j)
        {
            prime[i * p[j]] = 1;
            if (i % p[j] == 0)
                break;
        }
        // 筛法 质数
    }
    int i = 1, j = cnt;
    while (i < j)
    {
        if (p[i] * p[j] * p[j] * p[j] <= n)
        {
            ans += j - i;
            i++;
        }
        else
        {
            j--; // 尺取法
        }
    }
    write(ans);
    return 0;
}
