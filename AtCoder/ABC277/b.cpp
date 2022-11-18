#include <bits/stdc++.h>
using namespace std;
map<string, bool> mp;
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    cin >> n;
    int flag = 1;
    while (n--)
    {
        string tmp;
        cin >> tmp;

        if (mp[tmp] == true)
        {
            flag = 0;
        }

        mp[tmp] = true;

        if (tmp[0] == tmp[1])
            flag = 0;

        char cur = tmp[0];

        if (cur != 'H' && cur != 'D' && cur != 'C' && cur != 'S')
            flag = 0;

        cur = tmp[1];

        if (cur != 'A' && cur != 'T' && cur != 'J' && cur != 'Q' && cur != 'K' && cur != '2' && cur != '3' && cur != '4' && cur != '5' && cur != '6' && cur != '7' && cur != '8' && cur != '9')
            flag = 0;
        // if (!('2' <= cur && cur <= '9'))
        //     flag = 0;
    }
    if (flag == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}