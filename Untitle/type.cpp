#include <bits/stdc++.h>
#define int long long
using namespace std;
string f;
signed main() {
	int n;
	cin >> n;
	while (n--) {
		int op;
		cin >> op;
		if (op == 1) {
			string x;
			cin >> x;
			f += x;
		} else if (op == 2) {
			int a, b;
			cin >> a >> b;
			string tmp = f.substr(0, a);
			while (b--) f += tmp;
		}
	}
//	cout << f << endl;
	int m;
	cin >> m;
	while (m--) {
		int x;
		cin >> x;
		cout << f[x - 1] << ' ' << endl;
	}
}
