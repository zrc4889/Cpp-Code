#include <bits/stdc++.h>
#include <algorithm> 
using namespace std;
int a[10001],b[10001], n, m, c[20002];

int main(){
	cin>>n>>m;
	for (int i=0;i<n;i++) cin>>a[i];
	for (int i=0;i<m;i++) cin>>b[i];
	for (int i=0;i<n+m;i++) {
		if (i>=n){
			c[i] = b[i-m];
		}else{
			c[i] = a[i];
		}
	}
	sort(c,c+n+m);
	for (int i=0;i<n+m;i++) cout<<c[i]<<" ";
	return 0;
}
