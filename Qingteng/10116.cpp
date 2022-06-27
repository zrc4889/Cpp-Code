#include <bits/stdc++.h>
using namespace std;
int a[20][20];
int main()
{
    int n;
    int t;
    cin >> n;
    while (n--)
    {
        cin >> t;
        for (int i = 1; i <= t; i++)
        {
            for (int j = 1; j <= t; j++)
            {
                cin >> a[i][j];
            }
        }
        // a[1][1] = 1;
        for (int i = 2; i <= t; i++)

        {
            for (int j = 2; j <= t; j++)
            {
                if (a[i][j - 1] != 0 || a[i - 1][j] != 0)
                {
                    a[i][j] = min(a[i][j - 1], a[i - 1][j]);
                }
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        
        if (a[t][t] != t * 2 - 2)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
    }
}