#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;

    string cur, las;
    string a;
    cin >> a;
    int n = a.size();
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        // 别被样例解释误导了！

        cur.push_back(a[i]); 
        if (cur != las) 
        {
            las = cur;
            ans++;
            cur = "";
        }
    }

    cout << ans << endl;

    return 0;
}