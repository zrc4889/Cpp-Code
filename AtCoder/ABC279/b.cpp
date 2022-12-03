#include <bits/stdc++.h>
using namespace std;
string x, y;
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> x >> y;

    int lx = x.size(), ly = y.size();
    string tmp;
    for (int i = 0; i <= lx - ly; i++)
    {
        tmp = "";
        for (int j = i; j < ly + i; j++)
        {
            tmp += x[j];
        }
        int flag = 1;
        for (int j = 0; j < tmp.size(); j++)
        {
            if (tmp[j] != y[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            return cout << "Yes" << endl, 0;
        // else
            // cout << "No" << endl;
    }
    cout << "No" << endl;
    return 0;
}