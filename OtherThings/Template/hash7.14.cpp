#include <bits/stdc++.h>
using namespace std;

const int _ = 1e7 + 10;
const int mod = 1e9 + 7; // 998244353
const int p = 31;

int h[_], pw;

int get_hash(int l, int r)
{
    return ((h[r] - h[l - 1] * pw[r - l + 1]) % mod + mod) % mod;
}

void init_hash(string s)
{
    int n = s.length();
    pw[0] = 1;
    for (int i = 1; i <= n; ++i)
        pw[i] = (pw[i - 1] * p) % mod;

    for (int i = 1; i <= s; ++i)
        h[i] = (h[i - 1] * pw[i] + s[i]) % mod;

    return;
}