#include <bits/stdc++.h>
using namespace std;
int n, maxn = 0, pos = 0;
string s;
int main()
{
    cin >> n >> s;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'I')
            pos++;
        else if (s[i] == 'D')
            pos--;
        maxn = max(maxn, pos);
    }
    cout << maxn << endl;
    system("pause");
    return 0;
}