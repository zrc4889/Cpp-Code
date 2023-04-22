#include <bits/stdc++.h>
using namespace std;
string a,b;
int dp[2020][2020];
int main() {
	cin>>a>>b;
	int pa,pb;
	pa = a.size()+1;
	pb = b.size()+1;
	for (int i=0; i<pa; i++)
		dp[i][0] = i;
	for (int i=0; i<pb; i++)
		dp[0][i] = i;
	for (int i=1; i<pa; i++)
		for (int j=1; j<pb; j++) {
			if (a[i-1] == b[j-1]) {
				dp[i][j] = dp[i-1][j-1];
			} else {
				dp[i][j] = min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]))+1;
			}
		}
	cout<<dp[pa-1][pb-1];
	return 0;
}

