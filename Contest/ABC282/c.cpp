#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    string a;
    int n;
    cin >> n >> a;
    int len = n - 1;
    bool sw = 0;

    for (int i = 0; i <= len; i++)
    {
        if (a[i] == '\"')
        {
            sw = !sw;
            cout << '\"';
        }
        else if (!sw)
        {
            if (a[i] == ',')
                cout << '.';
            else
                cout << a[i];
        }
        else
        {
            cout << a[i];
        }
    }

    cout << endl;

    return 0;
}