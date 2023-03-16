#include <bits/stdc++.h>
using namespace std;
int f[1005],a[1005];
int n=0;
int main() {
	while(cin>>a[n]&&a[n]!=0) {
		n++;
	}

	for (int i=1; i<=n; ++i) {
		f[i]=1;
		for (int j=1; j<i; ++j) {
			if (a[j]>=a[i]) {
				f[i] = max(f[i], f[j]+1);
			}
		}
	}
	int ans=0;
	for (int i=1; i<=n; ++i)
		ans = max(ans, f[i]);
	cout<<ans<<endl;

	for (int i=1; i<=n; ++i) {
		f[i]=1;
		for (int j=1; j<i; ++j) {
			if (a[j]<a[i]) {
				f[i] = max(f[i], f[j]+1);
			}
		}
	}
	ans=0;
	for (int i=1; i<=n; ++i)
		ans = max(ans, f[i]);
	cout<<ans;
	return 0;
}
