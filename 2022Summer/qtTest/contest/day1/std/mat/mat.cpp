#include <bits/stdc++.h>

#define Read(s) freopen(s ".in", "r", stdin);
#define Write(s) freopen(s ".out", "w", stdout);

using namespace std;

int n, m, now[800001];
long long ans = 1e18;
struct Mat {
    int a, b;
} p[800001];
long long f[30001];

int main() {
    Read("mat");
    Write("mat");

    cin >> n >> m;

    for (int i = 1; i <= m; i++) cin >> p[i].a >> p[i].b;

    for (int i = 1; i <= n; i++) {
        long long Min = 1e18, num;
        for (int j = 1; j <= m; j++)
            if (Min > p[j].a * (pow(now[j] + 1, p[j].b) - pow(now[j], p[j].b))) {
                Min = p[j].a * (pow(now[j] + 1, p[j].b) - pow(now[j], p[j].b));
                num = j;
            }
        now[num]++;
    }

    long long ans = 0;
    for (int i = 1; i <= m; i++) ans += p[i].a * pow(now[i], p[i].b);

    cout << ans << endl;
}