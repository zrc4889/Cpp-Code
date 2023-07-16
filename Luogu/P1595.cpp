#include <bits/stdc++.h>
using namespace std;
int n;
long long f[30];
int main() {
	cin>>n;
	f[1]=0;f[2]=1;f[3]=2;
	if (n==1||n==2||n==3)
	{
		cout<<f[n];
		return 0;
	}
	for (int i=4; i<=n; i++) {
		f[i]=(i-1)*(f[i-1]+f[i-2]);
	}
	cout<<f[n];
	return 0;
}

