#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    cin>>x;
    for (long long a = -200;a<=200;++a)
    {
        for (long long b=-200;b<=200;++b)
        {
            if (a*a*a*a*a - b*b*b*b*b == x)
            {
                cout<<a<<" "<<b<<endl;
                return 0;
            }
        }
    }
}