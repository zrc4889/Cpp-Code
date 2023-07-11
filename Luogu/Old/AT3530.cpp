#include <bits/stdc++.h>
#include <set>
using namespace std;
set<int> a;
int main()
{
    int n;
    cin >> n;
    while (n--){
        int x;
        cin>>x;
        if(a.find(x) != a.end())
            a.erase(x);
        else 
            a.insert(x);
    }
    cout<<a.size();
    // system("pause");
    return 0;
}