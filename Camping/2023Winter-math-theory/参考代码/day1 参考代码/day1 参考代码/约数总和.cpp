#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            sum += i;
            if (n / i != i) {
                sum += n / i;
            }
        }
    }
    cout << sum << endl;
    return 0;
}