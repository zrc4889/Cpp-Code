#include <bits/stdc++.h>
using namespace std;
int main()
{
    char temp;
    int xB, xL, xR, yB, yL, yR;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cin >> temp;
            if (temp == 'B')
            {
                xB = i, yB = j;
            }
            if (temp == 'L')
            {
                xL = i, yL = j;
            }
            if (temp == 'R')
            {
                xR = i, yR = j;
            }
        }
    }
    if (xB == xL && xB == xR && (yR < max(yL, yB) && yR > min(yL, yB)))
        return 0;
}