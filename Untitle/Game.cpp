#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    if (s[n] == 'x')
        cout << "No" << endl;
    else if (s[n] == 'o')
        cout << "Yes" << endl;
    return 0;
}