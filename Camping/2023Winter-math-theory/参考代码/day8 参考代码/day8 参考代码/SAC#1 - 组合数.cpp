#include <bits/stdc++.h>
using namespace std;
long long n , p = 6662333;
long long qpow(long long a , long long b) {
	if (b == 0) {
		return 1;
	}
	long long ans = qpow(a , b / 2);
	ans = ans * ans % p;
	if (b % 2 == 1) {
		ans = ans * a % p;
	}
	return ans;
}
int main () {
	cin >> n;
	cout << qpow(2 , n - 1);
	return  0;
}