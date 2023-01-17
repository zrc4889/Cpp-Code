#include <bits/stdc++.h>

using namespace std;
long long a[51];
int main () {
	int n;
	cin >> n;
	a[0] = a[1] = 1;
	for (int i = 2 ; i <= n ; i ++) {
		for (int j = 0 ; j < i ; j ++) {
			a[i] = a[i] + a[j] * a[i - j - 1];
		}
	}
	cout << a[n];
	return 0;
}