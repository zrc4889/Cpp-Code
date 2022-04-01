#include <bits/stdc++.h>
using namespace std;
int a[20000000];
int main()
{
    // init
    int n,x; // n长度 x需要查找的值
    cin>>n;
    for (int i=1;i<=n;++i)
    {
        scanf("%d",&a[i]);
    }
    cin>>x; // 找出x第一次出现的位置

    // 二分
    int l=1,r=n;
    // 答案区间为[1,n]
    while (l+1<r)
    {
        int mid = l+(r-1)/2; // mid = (l+r)/2 但是容易溢出
        if (a[mid] >= x)
        // [l,mid]
        {
            r=mid;
        }else{
            //[mid,r]
            l=mid;
        }

    }
    // [l,r] l+1 >= r

    if (a[l] == x) printf("%d",l)
    else if (a[r]==x)cout<<r;
    else cout<<-1;

    return 0;
}