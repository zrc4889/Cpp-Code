#include <bits/stdc++.h>
using namespace std;

int n;
int a, b, c;

int main()
{
    string s;
    cin >> n >> s;

    int i = 0;
    for (auto x : s)
    {
        if (a != 0 && b != 0 && c != 0) break;
        i ++;
        if (x == 'A') a ++;
        if (x == 'B') b ++;
        if (x == 'C') c ++;
    }

    cout << i << endl;
    return 0;
}