#include <bits/stdc++.h>
using namespace std;

const int _ = 1e8 + 10;
const int mod = 1e9 + 7;
const int p = 61;

bool vis[_]; // vis[i] 定义为 i = h(s) 的字符串是否出现过
int pw[_];
int q, n;
int cnt = 0;

int get_hash(string s)
{
    int n = s.length();
    s = '#' + s;

    int hash = 1, lasthash = 1;
    for (int i = 1; i <= n; ++i)
        hash = (lasthash * p + s[i]) % mod, lasthash = hash;

    return hash;
}

bool is_vis(string s)
{
    int hash = get_hash(s);
    return vis[hash];
}

void init_hash(string s)
{
    int hash = get_hash(s);
    vis[hash] = true;
    return;
}

int main()
{
    // start here..

    pw[0] = 1;
    for (int i = 1; i <= _; ++i)
        pw[i] = (pw[i - 1] * p) % mod;

    cin >> q;
    n = q;

    while (q--)
    {
        string s;
        cin >> s;

        if (is_vis(s) == true)
            cnt++;
        init_hash(s);
    }

    cout << n - cnt << endl;
    return 0;
}