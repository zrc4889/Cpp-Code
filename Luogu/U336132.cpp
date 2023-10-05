#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        string a;
        cin >> a;
        if (a == "WA" || a == "TLE" || a == "MLE") cout << i << ' ';
    }
    
    return 0;
}