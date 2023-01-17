#include <cstdio>
#include <cstring>
#include <utility>
#include <algorithm>
using namespace std;

int C[2010][2010];
int cnt[2010][2010];

int main() {
    int t, k;
    scanf("%d%d", &t, &k);
    C[0][0] = 1;
    for (int i = 1; i <= 2000; ++i) {
        C[i][0] = 1;
        for (int j = 1; j <= i; ++j) cnt[i][j] = !(C[i][j] = (C[i - 1][j] + C[i - 1][j - 1]) % k);
    }
    for (int i = 1; i <= 2000; ++i)
        for (int j = 1; j <= 2000; ++j) cnt[i][j] += cnt[i - 1][j] + cnt[i][j - 1] - cnt[i - 1][j - 1];
    while (t--) {
        int n, m;
        scanf("%d%d", &n, &m);
        printf("%d\n", cnt[n][m]);
    }
    return 0;
}