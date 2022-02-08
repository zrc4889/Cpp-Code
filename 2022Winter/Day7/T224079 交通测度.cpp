#include <bits/stdc++.h>

using namespace std;
string op[200];
int a[200], b[200];
int n;
int main() {
	
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> op[i] >> a[i] >> b[i];
	}

	int l = 0, r = INT_MAX / 3;

	for (int i = n; i >= 1; --i) {

		if (op[i] == "none") {

			l = max(l, a[i]);

			r = min(r, b[i]);
		} 

		if (op[i] == "off") {

			l += a[i];
			r += b[i];
		} 

		if (op[i] == "on") {

			l -= b[i];
			r -= a[i];

			l = max(0, l); r = max(0, r);
		}

	}

	cout << l << " " << r << endl;


	l = 0, r = INT_MAX / 3;

	for (int i = 1; i <= n; ++i) {

		if (op[i] == "none") {
			l = max(l, a[i]);
			r = min(r, b[i]);
		}

		if (op[i] == "on") {
			l += a[i];
			r += b[i];
		}

		if (op[i] == "off") {

			l = l - b[i];
			r = r - a[i];

			l = max(0, l); r = max(0, r);
		}
	}

	cout << l << " " << r << endl;
}