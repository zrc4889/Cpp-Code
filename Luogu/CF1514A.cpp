#include <bits/stdc++.h>
using namespace std;
int t;
int main()
{
    cin>>t;
    while (t--)
    {
        int n,a;
        bool f = true;
        cin >> n;
        for (int i=1;i<=n;++i)
        {
            cin>>a;
            int k = sqrt(a); // 根号
            if (k*k!=a) f = false; // 去根后反过来，如果不能相等就是非完全平方数
        }
        if (f) cout<<"NO";
        else cout<<"YES";
        cout<<endl; // 统一输出
    }
    return 0;
}