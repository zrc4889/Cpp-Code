#include <bits/stdc++.h>

using namespace std;
const int p = 100000007;
long long a[5100];
int main () {
	int n;
	cin >> n;
	a[0] = a[1] = 1;
	for (int i = 2 ; i <= n ; i ++) {
		for (int j = 0 ; j < i ; j ++) {
			a[i] = (a[i] + a[j] * a[i - j - 1]) % p;
		}
	}
	cout << a[n];
	return 0;
}