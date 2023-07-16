#include <bits/stdc++.h>
using namespace std;
char a[4][4];
int main()
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (a[i][j] != a[2 - i][2 - j])
            {
                cout << "NO";
                return 0;
            }

    cout << "YES";
    return 0;
}