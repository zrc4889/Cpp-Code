#include <bits/stdc++.h>
using namespace std;
int cnt[4];
int main() {
	freopen("offer.in", "r", stdin);
	freopen("offer.out", "w", stdout);

	int n;
	cin >> n;
	while(n--) {
		memset(cnt, 0, sizeof cnt);
		string str;
		cin >> str;
		for(int i = 0; i < str.size(); i++)
			cnt[str[i]-'A']++;
		if(cnt[3] > 0 || cnt[2] > 1)
			cout << "failed" << endl;
		else if(cnt[0] > 2)
			cout << "sp offer" << endl;
		else
			cout << "offer" << endl;
	}
}