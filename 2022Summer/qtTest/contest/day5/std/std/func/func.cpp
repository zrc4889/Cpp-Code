#include <iostream>

using namespace std;

int F(int x) {
    if (x <= 100)
        return F(F(x + 11));
    return x - 10;
}
int main() {
    freopen("func.in", "r", stdin);
    freopen("func.out", "w", stdout);
    int n;
    while (cin >> n) {
        if (n == 0)
            break;
        cout << F(n) << endl;
    }
    return 0;
}