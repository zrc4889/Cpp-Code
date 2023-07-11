#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    t++;
    while (t--)
    {
        int k;
        string n;
        cin >> k >> n;
        int flag = 1;
        int len = n.size();
        // cout<<len;
        if (len % k != 0)
        {
            cout << "baka" << endl;
            continue;
        }
        for (int i = 0; i <= len; i++)
        {
            if (n[i] != '9')
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "baka" << endl;
        }
        else
        {
            cout << "aya" << endl;
        }
    }
}