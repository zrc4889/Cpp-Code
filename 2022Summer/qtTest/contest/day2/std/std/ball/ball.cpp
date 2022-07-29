#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
int p, ans;
int main() {
    freopen("ball.in", "r", stdin);
    freopen("ball.out", "w", stdout);
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '0') {
            p = i;
            break;
        }
    }
    for (int i = p; i < s.size(); i++) {
        ans *= 10;
        ans += s[i] - '0';
        if (ans >= 7) {
            ans %= 7;
        }
    }
    cout << ans;
    fclose(stdin);
    fclose(stdout);
    return 0;
}