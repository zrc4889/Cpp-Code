#include <bits/stdc++.h>
using namespace std;
char FBI(string s)
{
    int l = s.length();
    if (l > 1)
    {
        cout << FBI(s.substr(0, l / 2));
        cout << FBI(s.substr(l / 2, l));
    }
    if (s == string(l, '0'))
        return 'B';
    if (s == string(l, '1'))
        return 'I';
    else
        return 'F';
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << FBI(s);
    return 0;
}