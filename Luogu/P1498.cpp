#include <bits/stdc++.h>
using namespace std;
int n;
char a[10000][10000];
int h = 2, w = 4;
void print()
{

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
}
void solve()
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= h; j++)
        {
            for (int k = 1; k <= w; k++)
            {
                a[j + h][k] = a[j + h][k + w] = a[j][k];
                a[j][k] = ' '; // 清除原来的三角形
            }
        }
        for (int j = 1; j <= h; j++)
        {
            for (int k = 1; k <= w; k++)
            {
                a[j][k + w / 2] = a[j + h][k];
            }
        }
        w *= 2, h *= 2;
    }
}
void init()
{
    memset(a, ' ', sizeof(a));
    a[1][1] = a[1][4] = ' ';
    a[1][2] = a[2][1] = '/';
    a[1][3] = a[2][4] = '\\';
    a[2][2] = a[2][3] = '_';
}
int main()
{
    cin >> n;
    init();
    solve();
    print();
    // system("pause");
}