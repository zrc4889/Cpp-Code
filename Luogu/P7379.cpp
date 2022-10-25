#include <bits/stdc++.h>
using namespace std;
int n, x;
string s;
signed main()
{
    cin >> n >> s;
    s = ' ' + s;
    for (int i = 1; i <= n; i++)
        if (s[i] == 'x')
        {
            x = i;
            break;
        }
    if (x == n)
    {
        int sum = 0, tot = 1;
        for (int i = n - 1; i >= 1; i--)
        {
            tot++;
            if (tot & 1)
            {
                sum += s[i] - '0';
            }
            else
            {
                int a = (s[i] - '0') * 2;
                sum += (a % 10 + a / 10);
            }
        }
        sum = sum * 9 % 10;
        cout << sum << endl;
    }
    else
    {
        for (int j = 0; j <= 9; j++)
        {
            s[x] = j + '0';
            int sum = 0, tot = 1;
            for (int i = n - 1; i >= 1; i--)
            {
                tot++;
                if (tot & 1)
                {
                    sum += s[i] - '0';
                }
                else
                {
                    int a = (s[i] - '0') * 2;
                    sum += (a % 10 + a / 10);
                }
            }
            sum = sum * 9 % 10;
            if (sum == s[n] - '0')
            {
                cout << j << endl;
                return 0;
            }
        }
    }
}