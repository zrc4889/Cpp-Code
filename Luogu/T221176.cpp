#include <bits/stdc++.h>
using namespace std;
int n,a[105];
string t[105],cow[105];

int main(){
    cin>>n;
    for (int i=1;i<=n;i++)cin>>a[i];
    for (int i=1;i<=n;i++)cin>>cow[i];

    for (int i=1;i<=3;i++){
        for (int j=1;j<=n;j++){
            t[j] = cow[a[j]]; // 临时数组，按题目所说 a[j] 当调换的前
        }           
        for (int j=1;j<=n;j++){
            cow[j] = t[j]; // 2022年1月22日18点39分，看的是j下标
        }
    }
    for (int i=1;i<=n;i++){
        cout<<cow[i]<<endl;
    }
    // system("pause");
    return 0;

}