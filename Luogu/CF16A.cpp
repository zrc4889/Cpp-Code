#include <bits/stdc++.h>
using namespace std;
char a[10001][10001];
int n, m;
char temp = ' ';
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m - 1; j++)
        {
            if (a[i][j] != a[i][j + 1])
            {
                cout << "NO";
                // system("pause");
                return 0;
            }
            if (a[i][j] == a[i + 1][j])
            {
                cout << "NO";
                // system("pause");
                return 0;
            }
        }
        // for (int j = 0;j < m - 1; j++)
    }
    cout << "YES";
    // system("pause");
    return 0;
}