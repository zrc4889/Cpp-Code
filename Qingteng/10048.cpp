#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[1000];
	int n;
	cin>>n;
	int ans=0;
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	for (int i=0;i<n-1;++i){
		for (int j=0;j<n-1;++j){
			if (a[j]>a[j+1]){
				swap(a[j], a[j+1]);
				ans++;
				}
		}
	}
	cout<<ans;
	return 0;
}