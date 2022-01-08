#include <bits/stdc++.h>
using namespace std;
int a[10001];
int n, d;
int cnt=0;
int main(){
    cin>>n;
    cin>>d;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n-1;i++){
        if (a[i] < a[i+1]){
            int x = a[i+1] - a[i];
            cnt+=x%d;
            a[i] = a[i] + x%d*d;
        }else if (a[i] == a[i+1])
    }
    cout<<cnt;
    system("pause");
    return 0;
}