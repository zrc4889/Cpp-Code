#include <bits/stdc++.h>
using namespace std;
__uint128_t EXP[64] = { 1U };
void read(__uint128_t &a) {
    a = 0U;
    char g = getchar();
    while ((g < '0' || g > '9') && g != '.') g = getchar();
    while (g >= '0' && g <= '9') a = a * 10 + (g - '0'), g = getchar();
    if (g == '.')
        while (g >= '0' && g <= '9') g = getchar();
}
void write(__uint128_t a) {
    if (a == 0)
        return;
    write(a / 10U), cout << char(a % 10 + '0');
}
void Write(__uint128_t a) {
    if (a == 0)
        cout << '0';
    else
        write(a);
}
int dgt(__uint128_t a) {
    if (a == 0)
        return 0;
    return dgt(a / 10U) + 1;
}
int main() {
    freopen("number.in", "r", stdin);
    freopen("number.out", "w", stdout);
    for (int i = 1; i <= 38; i++) EXP[i] = EXP[i - 1] * 10U;
    __uint128_t k, ans[128] = { 0U, 0U, 1U, 5U, 6U };
    read(k);
    int ansk = 4, l = dgt(k);
    for (int i = 2; i <= l; i++) {
        for (int j = ansk; j >= 1; j--) {
            for (unsigned int k = 1U; k <= 9U; k++) {
                __uint128_t New = (k * EXP[i - 1] + ans[j]);
                if (New * New % EXP[i] == New)
                    ans[++ansk] = New;
            }
        }
    }
    sort(ans + 1, ans + ansk + 1);
    for (int i = 1; i <= ansk; i++)
        if (ans[i] > k)
            break;
        else
            Write(ans[i]), cout << ' ';
    cout << '\n';
    return 0;
}
