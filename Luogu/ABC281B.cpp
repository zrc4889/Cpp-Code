#include <bits/stdc++.h>
using namespace std;
void no()
{
    cout << "No" << endl;
    exit(0);
    return;
}
void yes()
{
    cout << "Yes" << endl;
    exit(0);
    return;
}
bool checkletter(char a)
{
    return a >= 'A' && a <= 'Z';
}
bool checknumber(char a)
{
    return a >= '0' && a <= '9';
}

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    string a;
    cin >> a;
    if (a.size() != 8)
        no();
    if (!checkletter(a[0]))
        no();
    if (!checkletter(a[7]))
        no();

    if (a[1] == '0')
        no();

    for (int i = 1; i < 7; i++)
    {
        if (!checknumber(a[i]))
            no();
    }
    yes();
    return 0;
}