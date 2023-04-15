#include <bits/stdc++.h>
using namespace std;
int m[2200][2200], ans, a, s, d, f;
int main() {
    for (int x = 1; x < 4; x++) {
        cin >> a >> s >> d >> f;
        for (int y = a + 1000; y < d + 1000; y++)
            for (int z = s + 1000; z < f + 1000; z++) {
                if (x < 3)
                    m[y][z]++, ans++;
                if (m[y][z] && x == 3)
                    ans--;
            }
    }
    cout << ans;
    return 0;
}