#include <bits/stdc++.h>
using namespace std;

void tmain()
{
    int n, t;
    cin >> n;
    int r = n % 7;
    if (n % 10/*个位*/ >= r)
        n -= r;
    else
        n += (7 - r);
    cout << n << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        tmain();
}