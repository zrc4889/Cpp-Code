#include <bits/stdc++.h>
using namespace std;
string b = "";
int check_sum(string a)
{
    int res = 0;
    int len = a.length();
    for (int i = 0; i <= len; i++)
    {
        if (a[i] == 'o' && a[i + 1] == 'w' && a[i + 2] == 'o')
            res++;
    }
    return res;
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int T;
    cin >> T;
    while (T--)
    {
        string tmp;
        cin >> tmp;
        int ans = 0;
        int t1 = check_sum(tmp + b), t2 = check_sum(b + tmp);
        if (t1 > t2)
        {
            b = tmp + b;
            ans = t1;
        }
        else
        {
            b = b + tmp;
            ans = t2;
        }

        cout << ans << endl;
    }
    return 0;
}