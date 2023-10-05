#include <bits/stdc++.h>
using namespace std;
string s[20];
int main()
{
    s[1] = '1';
    for (int i = 2; i < 20; i++)
        s[i] = s[i - 1] + ' ' + to_string(i) + ' ' + s[i - 1];
    int n; // 打表
    cin >> n;
    cout << s[n] << endl;
}