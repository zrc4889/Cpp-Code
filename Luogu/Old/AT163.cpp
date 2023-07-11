#include <bits/stdc++.h>
using namespace std;
string a[105];
int n;
bool cmp(string a,string b){
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int x = a<b; // 看看a是否大于b（ASCII美国信息交换标准代码）
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    return x;
}
int main(){
    cin>>n;
    for (int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n,cmp);
    for (int i=0;i<n;i++) cout<<a[i]<<endl;
    return 0;
}