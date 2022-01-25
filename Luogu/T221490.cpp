#include <bits/stdc++.h>
using namespace std;
char a[4][4];
int ans = 0;
void check()
{
    ans = 0;
    for (int i = 1; i <= 3; i++)
    {
        if (a[i][1] == a[i][2] || a[i][1] == a[i][3] || a[i][2] == a[i][3])
            ans++;
        if (a[1][i] == a[2][i] || a[2][i] == a[3][i] || a[1][i] == a[3][i])
            ans++;
    }

    if (a[1][1] == a[2][2] || a[2][2] == a[3][3] || a[1][1] == a[3][3])
        ans++;
    if (a[1][3] == a[2][2] || a[2][2] == a[3][1] || a[1][3] == a[3][1])
        ans++;
    cout << ans;
}
void check_1()
{
    // char temp;
    ans = 0;
    for (int i = 1; i <= 3; i++)
    {
        // temp = a[i][1];
        // for (int j=1;j<=3;j++)
        // {
        // if (a[i][1] != )
        //
        // }
        if (a[i][1] == a[i][2] && a[i][2] == a[i][3] && a[i][3] == a[i][1])
            ans++;
        if (a[1][i] == a[2][i] && a[2][i] == a[3][i] && a[3][i] == a[1][i])
            ans++;
    }
    if (a[1][1] == a[2][2] && a[2][2] == a[3][3] && a[1][1] == a[3][3])
        ans++;
    if (a[1][3] == a[2][2] && a[2][2] == a[3][1] && a[1][3] == a[3][1])
        ans++;
    cout << ans;
}
int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cin >> a[i][j];
        }
    }
    check_1();
    cout << endl;
    check();
    // system("pause");
}