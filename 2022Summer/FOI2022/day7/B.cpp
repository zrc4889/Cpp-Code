#include <bits/stdc++.h>
using namespace std;

int a[114514];
int dp[105][105] = { -1 };
int n, k;
set<int> f;
const int _ = 2e5 + 10;
int l[_], r[_];
bool is(int l, int r) {  // O(r - l)
    //	if (dp[l][r] != -1) return dp[l][r]; // 记忆化去重
    f.clear();
    for (int i = l; i <= r; i++) f.insert(a[i]);
    int len = f.size();
    if (len != r - l + 1)
        return 0;  // 有重 0
    else
        return 1;  // 无重 1
}
int main() {
    freopen("Bananice.in", "r", stdin);
    freopen("Bananice.out", "w", stdout);
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        //		f.insert(a[i]);
    }
    for (int i = 1; i <= k; i++) {
        cin >> l[i] >> r[i];
    }
    //	cout << l[1] << ' ' << r[1] << endl;
    //	cout << is(l[1], r[1]);
    //	cout << "  0|";
    //	for (int i = 1; i <= n; i++) cout << i << " ";
    //	cout << endl;
    for (int i = 0; i < n; i++) {
        //		cout << i << ' ';
        for (int j = 0; j < n; j++) {
            dp[i][j] = is(i, j);
            cout << dp[i][j] << ' ';
            //			cout << is(i, j) << ' ';
        }
        cout << endl;
    }  // 预处理 O(n*n);
    for (int i = 0; i < k; i++) {        
        // l[i] 与 r[i]
        cout << dp[l[i]][r[i]] << endl;
    }
    return 0;
}