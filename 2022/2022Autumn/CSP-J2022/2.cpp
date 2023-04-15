#include <bits/stdc++.h>
using namespace std;
// 预计至少 40 pts
signed main()
{
	int n;
	cin >> n;
	if (n % 4 == 0) return cout << -1 << endl, 0;
	if (n == 5) return cout << "00110" << endl, 0;
	if (n == 9) return cout << "000101110" << endl, 0;
	else return cout << -1 << endl, 0;
	
	return 0;
}
