#include<bits/stdc++.h>

#define maxn 100010

using namespace std;
int n,m;
int main(){
	cin>>n>>m;
	if(n==1){cout<<1;return 0;}
	if(n%2==0&&m>n/2) cout<<m-1;
	if(n%2==0&&m<=n/2) cout<<m+1;
	if(n%2!=0&&m>=n/2+1) cout<<m-1;
	if(n%2!=0&&m<n/2+1) cout<<m+1;
	return 0;
}