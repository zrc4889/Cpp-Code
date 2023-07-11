#include <bits/stdc++.h>

using namespace std;
long long a[50 + 10], f[55][55];

int main() {
	int n, L, R;
	cin >> n >> L >> R;
	for (int i = 1; i <= n; ++i) scanf("%lld", &a[i]);
	sort(a + 1, a + n + 1);
	double c = 0;
	for (int i = n - L + 1; i <= n; ++i) c += a[i];
	c = c / L;
	cout << fixed << setprecision(6) << c << endl;
	
	int x = 0, y = 0;
	for (int i = n - L + 1; i <= n; ++i)
		if (a[i] == a[n - L + 1]) x ++;
	
	for (int i = 1; i <= n; ++i)
		if (a[i] == a[n - L + 1]) y ++;
	
	
	f[1][0] = f[1][1] = 1;
	
	for (int i = 2; i <= y; ++i) {
		
		f[i][0] = f[i][i] = 1;
		for (int j = 1; j < i; ++j) 
			f[i][j] = f[i - 1][j - 1] + f[i - 1][j];
	}
	
	long long ans = f[y][x];
	if (a[n] == a[n - L + 1]) {
		
		ans = 0;
		for (int i = L; i <= R; ++i)
			ans += f[y][i];
		
	}
	
	cout << ans << endl;
	
	
	
	return 0;
}