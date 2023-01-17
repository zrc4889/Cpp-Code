#include <iostream>
using namespace std;
int n, a[5001], v[5001]; 
long long jc[5001] = { 1 }, sum;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        jc[i] = i * jc[i - 1] % 998244353;  
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < a[i]; j++) {  
            if (!v[j]) { 
                sum = (sum + jc[n - i]) % 998244353;
            }
        }
        v[a[i]] = 1; 
    }
    cout << (sum + 1) % 998244353;
    return 0;
}