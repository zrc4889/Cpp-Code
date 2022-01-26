#include <bits/stdc++.h>
using namespace std;
int c[8], m[8];
int main()
{
    for (int i = 1; i <= 3; i++)
        cin >> c[i] >> m[i];
    for (int h = 1; h <= 100; h++)
    {
        if (h % 3 == 1)
        {
            int d = min(m[1], c[2] - m[2]);
            m[1] -= d, m[2] += d;
        }
        else if (h % 3 == 2)
        {
            int d = min(m[2], c[3] - m[3]);
            m[2] -= d, m[3] += d;
        }
        else
        {
            int d = min(m[3], c[1] - m[1]);
            m[3] -= d, m[2] += d;
        }
    }
    for (int i = 1; i <= 3; i++)
    {
        cout << m[i] << '\n';
    }
    return 0;
}