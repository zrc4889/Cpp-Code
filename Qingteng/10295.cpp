#include <bits/stdc++.h>
using namespace std;
int n;
int f[9999999];
int main() {
	cin>>n;
	f[1]=1;
	f[2]=2;
	for (int i=3; i<=n; ++i
	    ) {
		if (i%2==1) { // ����ֻ�ܼ�һ 
			f[i]=f[i-1]+1;
		} else { // ��һ����С��  
			f[i]=min(f[i-1]
			         ,f[i/2])+1;
		}
	}
	cout<<f[n];
	return 0;
}

