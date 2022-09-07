#include <iostream>
using namespace std;

int n;
int digits[10];
int sum1 = 0;
long long sum2 = 0;

void solve(int x) {
    int y = x;
    int len = 0;
    while (y > 0) {
        digits[len++] = y % 10;
        y /= 10;
    }
    for (int i = 0; i < len; i++) {
        if (digits[i] > 0) {
            sum1 += 1;
            sum2 += digits[i];
        }
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) solve(i);
    cout << sum1 << ' ' << sum2;
    return 0;
}