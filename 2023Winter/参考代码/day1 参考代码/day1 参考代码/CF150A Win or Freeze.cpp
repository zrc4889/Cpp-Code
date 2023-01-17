#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
long long x,k,ans = 1;
void check(long long x)
{
    long long y = x;
    for(long long i=2;i*i<=x;i++)
    {
        //cout << i * i << endl;
        while(x%i == 0&&i*i<=x)
        {
            k++;
            ans *= i;
            x/=i; 
            //cout << i <<" ";
            if(k==2&&x!=y){ k++; return;}
        }
    }
    k += x!=y;
}
int main()
{
    cin >> x;
    check(x);
    //cout << k << " ";
    if(k==2) printf("2");
    else 
    {
        printf("1 ");
        if(ans==1) cout << "0";
        else cout << ans;
    }
    return 0;
}