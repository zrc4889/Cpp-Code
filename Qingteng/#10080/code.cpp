#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;
    int m;
    cin >> n >> m;

    for (int i = 1; i <= m; ++i) {
        if (n.size() == 0)
            break;
        int j = 0;

        // 1239
        while (j < n.size() - 1 && n[j] <= n[j + 1]) j++;
        n.erase(j, 1);
    }

    int l = n.size();
    while (l > 0 && n[0] == '0') {
        l--;
        n.erase(0, 1);
    }
    if (n.size() == 0)
        cout << 0 << endl;
    else
        cout << n << endl;
}