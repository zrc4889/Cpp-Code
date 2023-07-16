#include <bits/stdc++.h>
using namespace std;

int p[1145141];
int n, k;

bool isp(int x)
{
    if (x <= 1)
        return 0;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    // start here..

    cin >> n >> k;
    // init();
    int pos = 1;

    for (int i = 2; i <= n; i++)
    {
        if (isp(i))
            p[pos++] = i;
        // 紧密的记录
    }

    int ans = 0;

    for (int i = 2; i <= n; i++)
    {
        if (isp(i))
        {
            for (int j = 2; j < pos; j++)
                if (p[j] + p[j - 1] + 1 == i)
                {
                    ans++;
                    break;
                }
        }
    }

    cout << (ans >= k ? "YES" : "NO");

    return 0;
}