#include <bits/stdc++.h>
#define int long long
using namespace std;
char a[11];

int tmp = 1, sum = 0;
int cur = 1;
bool isletter(char s)
{
    return 'A' <= s && s <= 'Z';
}

bool isdigt(char s)
{
    return '0' <= s && s <= '9';
}

signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> a;

    int len = strlen(a) - 1;

    if (!isletter(a[0]))
        return cout << "No" << endl, 0;
    if (!isletter(a[len]))
        return cout << "No" << endl, 0;

    for (int i = 1; i <= len - 1; i++)
    {
        if (a[i] == '0')
            cur++;
        else
            break;
    }

    for (int i = len - 1; i >= cur; i--)
    {
        if (!isdigt(a[i]))
            return cout << "No" << endl, 0;
        sum += tmp * (a[i] - '0');
        tmp *= 10;
    }

    if (100000 <= sum && sum <= 999999)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}