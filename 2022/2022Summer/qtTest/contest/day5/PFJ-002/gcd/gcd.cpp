#include <bits/stdc++.h>
using namespace std;
typedef long long llint; // 简写
const int mod = 1e9;
map<int, int> A, B;

void dc(map<int, int> &M)
{
    int n, x;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        for (int j = 2; j * j <= x; ++j)
            while (x % j == 0)
                x /= j, M[j]++;
        if (x > 1)
            M[x]++;
    }
}
int main()
{
    freopen("gcd.in", "r", stdin);
    freopen("gcd.out", "w", stdout);
    dc(A), dc(B);
    llint ans = 1;
    bool vis = false; // 标记
    for (map<int, int>::iterator it = A.begin(); it != A.end(); ++it)
    {
        if (B.count(it->first))
        {
            int p = it->first;
            int r = min(A[p], B[p]);

            for (int i = 0; i < r; ++i)
            {
                ans *= p;
                if (ans >= mod)
                {
                    ans %= mod, vis = true;
                    // 超过九位数
                }
            }
        }
    }
    if (vis)
        printf("%09d\n", (int)ans);
    else
        cout << (int)ans;
    return 0;
}