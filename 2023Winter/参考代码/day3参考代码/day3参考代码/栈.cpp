#include <bits/stdc++.h>
using namespace std;
int a, s[30];
int main() {
    cin >> a;
    s[0] = 1;
    s[1] = 1;
    for (int i = 2; i <= a; i++) {
        for (int j = 0; j < i; j++) {
            s[i] += s[j] * s[i - j - 1];
        }
    }
    cout << s[a];
    return 0;
}