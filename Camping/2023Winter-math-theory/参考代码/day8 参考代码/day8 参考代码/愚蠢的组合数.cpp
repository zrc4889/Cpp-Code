#include<bits/stdc++.h>
using namespace std;
long long t, n, k;
int main() {
	cin >> t;
	while(t--) {
		scanf("%lld%lld", &n, &k);
		printf("%lld\n", (n & k) == k);
	}
	return 0;
}