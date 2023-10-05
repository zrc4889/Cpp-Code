#include <bits/stdc++.h>
using namespace std;
const int _ = 1e7;
int a[_];
int main()
{
#ifdef LOCAL
    LOCALfo 
#endif
        ;
    int h, w;
    cin >> h >> w;
    for (int i = 1; i <= h; i++)

    {
        for (int j = 1; j <= w; j++)
        {
            char f;
            cin >> f;
            if (f == '#')
                a[i]++;
        }
    }

    for (int i = 1; i <= h; i++)
    {
        int sum = 0;
        for (int j = 1; j <= w; j++)
        {
            char f;
            cin >> f;
            if (f == '#')
                sum++;
        }
        if (sum != a[i])
        {
            return cout << "No" << endl, 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}