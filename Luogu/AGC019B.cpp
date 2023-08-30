#include <bits/stdc++.h>
#define int long long 
using namespace std;

string s;
int len, ans;
map<char, int> m;

signed main()
{
    cin >> s;
    len = s.size();

    for (int i = 0; i <= len - 1; ++i)
        m[s[i]] ++;
    // 像桶一样统计数字出现个数

    ans = len * (len - 1) / 2 + 1;

    for (auto [fir, sec] : m)
        ans -= sec * (sec - 1) / 2;
    
    cout << ans << endl;

    return 0;
}