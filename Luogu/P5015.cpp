#include <bits/stdc++.h>
using namespace std;
string a;
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    getline(cin, a);
    int sum = 0;
    int l = a.length();
    for (int i = 0; i < l; i++)
    {
        int t = a[i];
        if ('0' <= t && t <= '9')
            sum++;
        else if ('a' <= t && t <= 'z')
            sum++;
        else if ('A' <= t && t <= 'Z')
            sum++;
    }
    cout << sum << endl;
    return 0;
}