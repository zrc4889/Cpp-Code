#include <iostream>
using namespace std;

int main() {
    int t, x, is_prime;
    cin >> t;
    for (int i = 1; i <= t; i = i + 1) {
        cin >> x;
        is_prime = 1;

        for (int j = 2; j * j <= x; j = j + 1)
            if (x % j == 0) {
                is_prime = 0;
                break;
            }
        if (is_prime == 1 && x >= 2) {
            cout << "Y" << endl;
        } else {
            cout << "N" << endl;
        }
    }
    return 0;
}