#include <bits/stdc++.h>
using namespace std;
char c[260];
int main()
{
    int s, i;
    cin >> c >> s;
    int len = strlen(c); // 去长度
    while (s--)
    {
        for (i = 0; i <= len - 2; i++)
        {
            if (c[i] > c[i + 1])
            {
                for (int j = i; j <= len - 2; j++)
                    c[j] = c[j + 1];
                break;
            }
        }
        len--;
    }
    i = 0;
    while (i <= len - 1 && c[i] == '0')
        i++;
    if (i == len)
        cout << 0; // 特判只剩0了
    else
    {
        for (int j = i; j <= len - 1; j++)
            cout << c[j];
    }
    return 0;
}