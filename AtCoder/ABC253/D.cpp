#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a, b;
int s[1000000]={0};
int sum=0;
signed main()
{
    cin >> n >> a >> b;
    for (int i=1;i<=n;i++)
    {
        if (i % a == 0)
        {
            s[i] = -1;
        }
        if (i % b == 0)
        {
            s[i] = -1;
        }
    }
    for (int i=1;i<=n;i++)
    {
        if (s[i] != -1)
        {
            sum+=i;
        }
    }
    cout<<sum;
    return 0;
}