#include <bits/stdc++.h>
using namespace std;
const int SIZE = 100000;
int num[SIZE],n,a[SIZE];
//void array(){
//	for (int i=0;i<n;i++){
//		cout<<a[i]<<" ";
//	}
//}

int main () {
	cin>>n;
	for (int i=0; i<n; i++) cin>>num[i];
	for (int i=1; i<n; i++) a[i-1]=abs(num[i-1]-num[i]);
//	array();
	sort(a,a+n);
	int flag=true;
	for (int i=0; i<n; i++) if (a[i]!=i) flag=false;
	if (flag==1) cout<<"Jolly";
	else cout<<"Not jolly";
	return 0;
}


