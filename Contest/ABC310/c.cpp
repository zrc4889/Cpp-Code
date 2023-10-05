#include <bits/stdc++.h>
using namespace std;

const int _ = 2e5 + 10;

int n;
string a[_];
int len[_];
int cnt = 1;

bool cmp(string x, string y)
{
    return x.length() < y.length();
}

int main()
{
    // start here..

    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    sort(a + 1, a + n + 1, cmp);

    for (int i = 1; i < n; ++i)
        if (a[i].length() < a[i + 1].length())
            len[cnt++] = i;
    len[cnt] = n;
    // [1, i], [i + 1, ...]

    // for (int i = 1; i <= n; ++i)
    //     cout << a[i] << endl;

    int ans = 0;

    for (int i = 1; i <= cnt; ++i)
    {
        // len[i] 代表长度为 i 的字符串集的最后一个字符串所在的位置
        string s = a[len[i - 1] + 1];
        // cout << s << endl;
        
        // a[j] 字符串

        if (len[i] - len[i - 1] == 1) continue;

        for (int k = len[i - 1] + 1; k <= len[i]; ++k)
        {
            if (s == a[k])
                ans++;

            else
            {
                // cout << a[k] << endl;

                reverse(a[k].begin(), a[k].end());

                // cout << endl;
                // cout << a[k] << endl;

                if (s == a[k])
                    ans++;

                reverse(a[k].begin(), a[k].end());
            }
        }
    }

    cout << ans << endl;
    return 0;
}