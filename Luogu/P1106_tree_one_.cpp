#include <bits/stdc++.h>
#include <cstring>
using namespace std;
const int _ = 260;
string a;
int one[_];
int tree;
int n;
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
            cin >>
        a;
    cin >> n;
    tree = a.length();
    for (int i = 0; i < tree; i++)
        one[i] = a[i] - '0';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < tree; j++)
        {
            if (one[j] > one[j + 1])
            {
                for (int k = j; k < tree - 1; k++)
                {
                    one[k] = one[k + 1]; // 2
                    // one[j] = one[j + 1];
                }

                break;
            }
        }
        tree--; // 1
    }
    int l = 0;
    int i = 0;
    while (one[i] == 0 && l < tree - 1)
    {
        i++;
        l++;
    }
    for (int i = l; i < tree; i++)
        cout << one[i];
    return 0;
}