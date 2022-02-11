#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
string s;
int main()
{
    int B1, B2, R1, R2, L1, L2;
    for (int i = 0; i < 10; i++)
    {
        cin >> s;
        for (int j = 0; j < 10; j++)
        {
            if (s[j] == 'B')
            {
                B1 = i;
                B2 = j;
            }
            if (s[j] == 'R')
            {
                R1 = i;
                R2 = j;
            }
            if (s[j] == 'L')
            {
                L1 = i;
                L2 = j;
            }
        }
    }
    int Br = abs(B1 - R1) + abs(B2 - R2);
    int Bl = abs(B1 - L1) + abs(B2 - L2);
    int Rl = abs(R1 - L1) + abs(R2 - L2);
    if ((B1 == L1 || B2 == L2) && Bl == Br + Rl)
        cout << Bl + 1 << endl;
    else
        cout << Bl - 1 << endl;
    return 0;
}