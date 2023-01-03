#include <bits/stdc++.h>
using namespace std;

map<char, int> mp;
const int mod = 1000003;

int main()
{
    // start here..
    string s;
    cin >> s;

    mp['>'] = 8;
    mp['<'] = 9;
    mp['+'] = 10;
    mp['-'] = 11;
    mp['.'] = 12;
    mp[','] = 13;
    mp['['] = 14;
    mp[']'] = 15;

    int len = s.size();
    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        sum = ((sum * 16) % mod + mp[s[i]]) % mod;
    }

    cout << sum << endl;

    return 0;
}