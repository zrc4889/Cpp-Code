#include <bits/stdc++.h>
using namespace std;
int js[10], n, m;
int main()
{
    cin >> n >> m;
    for (int i = n; i <= m; i++)
    {
        for (int tmp = i; tmp != 0; tmp /= 10)
        {
            js[tmp % 10]++; // 此时去个位数即可
        }
    }
    for (int i = 0; i <= 9; i++)
        cout << js[i] << ' ';
    cout << endl;
    return 0;
}