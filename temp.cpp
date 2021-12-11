#include <bits/stdc++.h>
using namespace std;
map<string,string>a;
string p[10001];
int main(){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        string temp;
        cin>>temp;
        string temp1;
        cin>>temp1;
        a[temp] = temp1;
    }
    int s;
    cin>>s;
    for (int i=0;i<s;i++){
        string temp;
        cin>>temp;
        p[i] = a[temp];
    }
    for (int i=0;i<s;i++){
        cout<<p[i]<<" ";
    }
    system("pause");
    return 0;
}