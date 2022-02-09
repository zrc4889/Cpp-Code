#include <bits/stdc++.h>
using namespace std;
int main()
{
    char temp;
    int bx, by, lx, ly, rx, ry;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cin >> temp;
            if (temp == 'B')
            {
                bx = i, by = j;
            }
            if (temp == 'L')
            {
                lx = i, ly = j;
            }
            if (temp == 'R')
            {
                rx = i, rx = j;
            }
        }
    }
    int ans1 = abs(lx - bx), ans2 = abs(ly - by);
    cout << ans1 + ans2 - 1;
    return 0;
}