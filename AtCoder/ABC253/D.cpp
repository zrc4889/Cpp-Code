#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;
int a,b;

signed main()
{
    cin>>n>>a>>b;
    int sum=0;
    for (int i=1;i<=n;i++)
    {
        if (i%a!=0&&i%b!=0)
        {
            // cout << i << " ";
            sum+=i;
        }
    }
    cout<<sum;#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;
int a,b;

signed main()
{
    cin>>n>>a>>b;
    int sum=0;
    for (int i=1;i<=n;i++)
    {
        if (i%a!=0&&i%b!=0)
        {
            // cout << i << " ";
            sum+=i;
        }
    }
    cout<<sum;
    return 0;
}
    return 0;
}