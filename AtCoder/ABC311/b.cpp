#include <bits/stdc++.h>
using namespace std;

const int _ = 101;

int n, m;
int ans = 0;
string s[_];
bool ch[_];

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        cin >> s[i];
    
    for (int i = 0; i < m; ++i)
    {
        int flag = 1;
        
        for (int j = 1; j <= n; ++j)
            if (s[j][i] == 'x') flag = 0;

        if (flag) ch[i] = true;
    }

    int len = 0;
    for (int i = 0; i <= m; ++i)
    {
        if (ch[i] == true)
            len ++;
        if (ch[i] == false)
            ans = max(ans, len), len = 0;
    }

    cout << ans << endl;
    return 0;
}