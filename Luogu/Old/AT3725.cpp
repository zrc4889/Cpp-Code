#include <bits/stdc++.h>
using namespace std;
long long a[1000001];
int main()
{
    int n,temp,ans=0;
    cin >> n;
    for (int i=1;i<=n;i++){
        cin>>temp;
        if (temp>n) ans++;
        else a[temp]++;
    }
    for (int i=1;i<=n;i++){
        if (a[i]==0) continue; // 未出现过
        if (a[i]<i) ans+=a[i]; // 全部换了
        else if (a[i]>i) ans+=a[i]-i; // 换了多余的
    }
    cout<<ans;
    // system("pause");
    return 0;
}