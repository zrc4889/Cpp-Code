#include <bits/stdc++.h>
using namespace std;

string a[1001];
string b[1001];
int cnt = 0;

int main()
{
    // start here..

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
        cin >> b[i];

    for (int i = 1; i <= n; i++)
    {
        a[i] = a[i].substr(3, 5);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i] == b[j])
            {
                cnt++;
                break;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}