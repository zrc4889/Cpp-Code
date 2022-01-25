#include <bits/stdc++.h>
using namespace std;
char a[4][4];
int ans = 0;
void check()
{
    for (int i = 1; i <= 3; i++)
    {
        if (a[i][1] == a[i][2] || a[i][1] == a[i][3] || a[i][2] == a[i][3])
            ans++;
    }
    // 横向
    for (int j = 1; j <= 3; j++)
    {
        if (a[1][j] == a[2][j] || a[2][j] == a[3][j] || a[1][j] == a[3][j])
            ans++;
    }
    //纵向

    if (a[1][1] == a[2][2] || a[2][2] == a[3][3] || a[1][1] == a[3][3])
        ans++;
    if (a[1][3] == a[2][2] || a[2][2] == a[3][1] || a[1][3] == a[3][1])
        ans++;

    cout<<ans;
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
    check();
    system("pause");
}