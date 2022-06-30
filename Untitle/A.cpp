#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e6 + 10;
bool check(int x)
{
    for (int i=1;i<=n;++i)
    {
        if (a[i]<x)
        {
            int p=x - a[i];
            for (int j=i;j<=i+L-1&&j<=n;++j)
                a[j]+=p;
        }
    }
}