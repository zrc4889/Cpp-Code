#include <bits/stdc++.h>
using namespace std;
#define maxn 100003
typedef long double ld;
vector<int> v[maxn];
ld ed;
void dfs(int i,int fa,int p,ld pro){
    if(v[i].size()==1&&i!=1)
        ed+=p*pro;
    vector<int>::iterator vi;
    for(vi=v[i].begin();vi!=v[i].end();++vi){
        if(*vi==fa) continue;
        dfs(*vi,i,p+1,pro/(i==1?(v[i].size()):(v[i].size()-1)));
    }
}
int main(){
    int n;
    cin>>n;
    int p,q;
    for(int i=1;i<n;++i){
        cin>>p>>q;
        v[p].push_back(q);
        v[q].push_back(p);
    }
    dfs(1,-1,0,1);
    cout<<fixed<<setprecision(15)<<ed<<endl;
    return 0;

}