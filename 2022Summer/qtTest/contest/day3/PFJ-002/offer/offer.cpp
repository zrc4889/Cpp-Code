#include <bits/stdc++.h>
using namespace std;
string a;
int main()
{
    freopen("offer.in", "r", stdin);
    freopen("offer.out", "w", stdout);
    int t;
    cin >> t;
    int q, w, e, r;
    q = w = e = r = 0;
    while (t--)
    {
        cin >> a;
        for (int i = 0; i < 4; i++)
        {
            switch (a[i])
            {
            case 'A':
                q++;
                break;
            case 'B':
                w++;
                break;
            case 'C':
                e++;
                break;
            case 'D':
                r++;
                break;
                // default:
                //     cout << "NfOuPcKe" << endl;
            }
        }
        // cout << q << endl;
        if (r >= 1 || e >= 2)
        {
            cout << "failed" << endl;
            // break;
        }

        else if (q >= 3 && r == 0)

        {
            //
            cout << "sp offer" << endl;
            // break;
        }
    }
    return 0;
}