#include <bits/stdc++.h>
#define int long long
using namespace std;

const int _ = 114514;

bool isp[_];
vector<int> v[_];
int n;

void fact(int n)
{
    cout << n << "=";
    for (auto cur : v[n])
    {
        int cnt = 0;
        while (n % cur == 0)
        {
            cnt++;
            n /= cur;
        }
        if (cnt > 0)
        {
            cout << cur << "^" << cnt << "*";
        }
    }
    if (n != 1) // why?
    {
        cout << n;
    }
}

void init()
{
    for (int i = 2; i <= n; i++)
        isp[i] = 1;
    for (int i = 2; i <= n; i++)
        if (isp[i])
        {
            v[i].push_back(i);
            for (int j = i * 2; j <= n; j += i)
                isp[i] = 0, v[j].push_back(i);
        }
}

signed main()
{
    // start here..

    cin >> n;

    init();

    fact(n);

    return 0;
}