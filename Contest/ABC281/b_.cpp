#include <bits/stdc++.h>
using namespace std;
string a;

int check1(char s)
{
    return 'A' <= s && s <= 'Z';
}

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> a;
    int len = a.length();
    // 首尾

    if (!check1(a[0]))
        return cout << "No" << endl, 0;
    if (!check1(a[len - 1]))
        return cout << "No" << endl, 0;

    string fuck = a.substr(1, len - 2);
    char fuckp[15];

    int fuckl = fuck.size();
    for (int i = 0; i < fuckl; i++)
    {
        fuckp[i] = fuck[i];
        if (fuck[i] < '0' || '9' < fuck[i])
            return cout << "No" << endl, 0;
    }

    int cur = 0;

    for (int i = 0; i < fuckl; i++)
    {
        if (fuckp[i] != '0')
        {
            cur = i;
            break;
        }
    }
    char fuck2[115];
    int cnt = 0;
    for (int i = cur; i < fuckl; i++)
    {
        fuck2[cnt++] = fuckp[i];
    }

    // cout << fuck2 << endl;

    int f2 = strcmp(fuck2, "100000");

    int f1 = strcmp(fuck2, "999999");

    if (f1 == -1 && f2 == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}