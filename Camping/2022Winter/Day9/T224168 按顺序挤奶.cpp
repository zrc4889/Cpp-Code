#include <bits/stdc++.h>

using namespace std;

string cows[8] = { "Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue",
				  "Betsy", "Sue"};

int find(string s) {
	for(int i = 0; i < 8; ++i) 
		if (cows[i] == s) return i;
}
string x[10], y[10], _;
int p[10], q[10], n;
int main() {
	
	
	sort(cows, cows + 8);
	
    cin >> n;
	
	
	for (int i = 1; i <= n; ++i) {
		
		cin >> x[i] >> _ >> _ >> _ >> _ >> y[i];
		int a = find(x[i]);
		int b = find(y[i]);
		p[a] ++; p[b] ++;
		
	}
	
	int cnt = 0;
	
	while (cnt != 8) {
		
		for (int i = 0; i < 8; ++i)
			if (p[i] == 1 || p[i] == 0) {
				q[cnt + 1] = i; p[i] = -1;
				break;
			}
		
		cnt ++;

		for (int i = 1; i <= 8; ++i) {

			for (int j = 1; j <= n; ++j) {

				int a = find(x[j]);
				int b = find(y[j]);

				if (q[cnt] == a && p[b] != -1) {
					q[cnt + 1] = b; p[b] = -1;
					cnt ++;
					break;
				}

				if (q[cnt] == b && p[a] != -1) {
					q[cnt + 1] = a; p[a] = -1;
					cnt ++;
					break;
				}

			}
		}
	}
	
	for (int i = 1; i <= 8; ++i)
		cout << cows[q[i]] << endl;
	

    return 0;
}