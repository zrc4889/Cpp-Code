#include <bits/stdc++.h>

using namespace std;

stack<int> s;
int ans, x, n;
int main() {
	
	cin >> n;
	
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &x);
		
		while (!s.empty() && s.top() > x) s.pop();
		
		if (!s.empty() && s.top() == x) continue;
		
		if (x) ans ++, s.push(x);
		
	}
	cout << ans << endl;
}
