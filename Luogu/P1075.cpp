#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin>>n;
    int ans = 0;
    for (int i=2;i<=sqrt(n);++i)
    {
        if (n % i == 0)
        {
            ans = max(i, n/i);
        }
    }   
    cout << ans << endl;
    return 0;
}