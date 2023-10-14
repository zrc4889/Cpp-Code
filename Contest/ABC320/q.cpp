#include <bits/stdc++.h>
#define int long long
using namespace std;

const int _ = 2e6 + 10;

int n;
int a[_];

void toBin(int x)
{
    stack<int> s;
    while (x != 0)
    {
        s.push(x % 2);
        x /= 2;
    }
    for (int i = 1; i <= n - s.size(); ++i) cout << 0 << ' ';
    while (!s.empty())
        printf("%d ", s.top()), s.pop();
}

int toOct(vector<int> s)
{   
    int ans = 0;
    for (int i = n; i >= 1; --i)
        ans += (s[i] == 1) ? (1 << (n - i)) : 0;
    return ans;
}

int fz(int s, int id) // 前 id 位
{
    int ans = 0;

    for (int i = 0; i < id; ++i)
        ans += (s >> i & 1 == 1) ? (1 << (id - i - 1)) : 0;

    for (int i = id; i < n; ++i)
        ans += (s >> i & 1 == 1) ? (1 << i) : 0;

    return ans;
}

int qf(int s, int id)
{
    int ans = 0;
    int tmp = 0, sum = 0;

    for (int i = 0; i < id; ++i)
        tmp += (s >> i & 1 == 1) ? (1 << i) : 0;

    for (int i = 0; i < id; ++i)
        sum += 1 << i;

    ans = sum - tmp;
    for (int i = id; i < n; ++i)
        ans += (s >> i & 1 == 1) ? (1 << i) : 0;

    return ans;
}

signed main()
{
    cin >> n;

    vector<int> v(n + 1);
    for (int i = 1; i <= n; ++i) cin >> v[i];

    int c = toOct(v);   
    c = fz(c, n);
    for (int i = 1; i <= n; ++i)
        c = fz(c, i), c = qf(c, i);
    c = fz(c, n);

    toBin(c);
    return 0;
}