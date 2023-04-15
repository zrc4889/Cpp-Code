#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    cout << n << "=";
    bool flag = true;
    for (int i = 2; i * i <= n; ++i) {
        int tot = 0;
        while (n % i == 0) {
            n /= i;
            tot++;
        }
        if (tot > 0) {
            if (!flag)
                cout << "*";
            flag = false;
            cout << i;
            if (tot > 1)
                cout << "^" << tot;
        }
    }
    if (n > 1 && !flag)
        cout << "*" << n;
    else if (n > 1)
        cout << n;

    return 0;
}