#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
string s;
ll n; // 存长度
int main()
{
    cin >> s;
    n = s.size();
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'e')
        {
            // 此时有两个可能 eraser 和 erase
            if (s[i + 1] == 'r' && s[i + 2] == 'a' && s[i + 3] == 's' && s[i + 4] == 'e')
            {
                if (s[i + 5] == 'r')
                    i += 5; // 下标不一样，懂吧。。
                else
                {
                    i += 4;
                }
            }
        }
        else if (s[i] == 'd')
        {
            // 此时的可能
            if (s[i + 1] == 'r' && s[i + 2] == 'e' && s[i + 3] == 'a' && s[i + 4] == 'm')
            {
                // 此时有可能会与earse重复
                if (s[i + 5] == 'e' && s[i + 6] == 'r' && s[i + 7] == 'a' && s[i + 8] == 's' && s[i + 9] == 'e')
                    i += 4;
                else if (s[i + 5] == 'e' && s[i + 6] == 'r')
                    i += 6;
                else
                    i += 4;
            }
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
