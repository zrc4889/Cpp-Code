#include <bits/stdc++.h>
#include <map>
using namespace std;
map<string, int> a;
int main()
{
    char str;
    int n;
    cin>>n;
    a["你"]=1;
    a["好"]=2;
    for (int i=1;i<=n;i++)
    {
        cin>>str;
        cout<<str;
        // cout<<a[str]<<"00"; 
    }
    return 0;
}