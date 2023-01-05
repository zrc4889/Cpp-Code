#include <bits/stdc++.h>
using namespace std;

int p, w, g, y;
int main()
{
    // start here..
    char c;

    while (cin >> c)
    {
        switch (c)
        {
        case 'G':
            g = 1;
            break;
        case 'W':
            w = 1;
            break;
        case 'Y':
            y = 1;
            break;
        case 'P':
            p = 1;
            break;
        default:
            break;
        }
    }

    int sum = g + w + y + p;
    // cout << sum << endl;
    if (sum == 3)
        cout << "Three" << endl;
    else
        cout << "Four" << endl;

    return 0;
}