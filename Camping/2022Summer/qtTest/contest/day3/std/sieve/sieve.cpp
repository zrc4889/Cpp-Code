#include <bits/stdc++.h>

using namespace std;
#define LL long long
#define MAX_L 1000007
#define MAX_SORT_B 1000007
bool is_prime[MAX_L];
bool is_prime_small[MAX_SORT_B]; //对区间[a,b)内的整数执行筛法。isprime[i - a]=true <=> i是素数
void segment_sieve(LL a, LL b)
{
    for (int i = 0; (LL)i * i < b; i++)
        is_prime_small[i] = true;
    for (int i = 0; i < b - a; i++)
        is_prime[i] = true;
    for (int i = 2; (LL)i * i < b; i++)
    {
        if (is_prime_small[i])
        {
            for (int j = 2 * i; (LL)j * j < b; j += i)
            {
                is_prime_small[j] = false; //筛[2,sqrt(b))
            }
            for (LL j = max(2LL, (a + i - 1) / i) * i; j < b;
                 j += i) //(a+i-1)/i为[a,b)区间内的第一个数至少为i的多少倍.
            {
                is_prime[j - a] = false; //筛[a,b)
            }
        }
    }
}
int ans;
int main()
{
    freopen("sieve.in", "r", stdin);
    freopen("sieve.out", "w", stdout);
    int T;
    scanf("%d", &T);
    LL a, b;
    while (T--)
    {
        scanf("%lld%lld", &a, &b);
        ++b;
        segment_sieve(a, b);
        int cnt = 0;
        for (int j = 0; j < b - a; j++)
        {
            if (is_prime[j])
                cnt++;
        }
        if (a == 1)
            cnt--;
        ans += cnt;
    }
    printf("%d\n", ans);
}