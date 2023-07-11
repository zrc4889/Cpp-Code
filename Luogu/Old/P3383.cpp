#include <bits/stdc++.h>
using namespace std;
const int _ = 1e8;
int prime[_];
bool vis[_];
int cnt = 1;
void Euler_prime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (!vis[i])
            prime[cnt++] = i, vis[i] = true;
        for (int j = 1; j <= cnt; ++j)
        {
            if (i * prime[j] > n)
                break; // 越界
            vis[i * prime[j]] = true;
            if (i % prime[j] == 0)
                break; // 筛过了，O[N]复杂的关键
        }
    }
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    std::ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, k;
    cin >> n >> k;
    Euler_prime(n);
    while (k--)
    {
        int t;
        cin >> t;
        // t--;
        cout << prime[t] << endl;
    }
    return 0;
}