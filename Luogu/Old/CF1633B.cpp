#include <bits/stdc++.h>
using namespace std;
int n;
int p0, p1;
string s;
void tmain()
{
    cin >> s;
    p0 = 0, p1 = 0;
    for (auto i : s)
    {
        
        if (i == '0')
            p0++;
        else
            p1++;
    }
    if (p0 == p1)
        cout << p0 - 1 << endl;
    else
        cout << min(p0, p1) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        tmain();
}