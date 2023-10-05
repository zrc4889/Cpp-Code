#include <bits/stdc++.h>
using namespace std;

map<pair<int, int>, bool> user;
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n, q;
    cin >> n >> q;

    while (q--)
    {
        int t, a, b;
        cin >> t >> a >> b;
        switch (t)
        {
        case 1:
            user[make_pair(a, b)] = 1;
            break;
        case 2:
            user[make_pair(a, b)] = 0;
            break;
        case 3:
            // bool ab = user[make_pair(a, b)];
            // bool ba = user[make_pair(b, a)];
            // if (ab && ba)
            //     cout << "Yes";
            // else
            //     cout << "No";
            // cout << endl;
            cout << (user[make_pair(a, b)] && user[make_pair(b, a)] ? "Yes" : "No") << endl;
        }
    }
    return 0;
}