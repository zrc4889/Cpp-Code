#include <bits/stdc++.h>
using namespace std;
int f[5001];
int n,w[200],c[200];
int V;
int main() {
	cin>>V>>n;
	for (int i=1; i<=n; i++) {
		cin>>w[i]>>c[i];
	}
	for (int i=1; i<=n; i++) {
		for (int j=V; j>=0; j--) {
			if (j>=w[i]) {
				f[j] = max(f[j],f[j - w[i]]+c[i]);
			}
		}
	}
	cout<<"max="<<f[V]<<endl;
	return 0;
}

