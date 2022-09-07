
#include <bits/stdc++.h>
using namespace std;
// char a[101];
string a;
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    cin >> n;
    int ans = 0;
    // n++;
    int flag = 0;
    while (getline(cin, a))
    {
        int i = 0;
        int l = a.length();
        a[l] = ' ';
        // 找到第一个#号且前面都是空格
        while (a[i++] != '#' && a[i - 1] == ' ' && i < l)
            ;
        i--;
        flag = 0;
        if (a[i] == '#' && a[i + 1] == ' ')
        {
            // flag = 0;
            for (int p = i + 2; p < l; p++)
            {
                if (a[p] != ' ')
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag)
            ans++;
    }

    cout << ans << endl;
    return 0;
}