#include <bits/stdc++.h>

using namespace std;
string s; int n;
bool check(int k) {
    
    for (int i = 0; i < n - k + 1; ++i) {
        // [i, i + k - 1]
        int sum = 0;
        for (int j = 0; j < n - k + 1; ++j) {
            bool flag = true;
            for (int l = 0; l < k; ++l)
                if (s[i + l] != s[j + l])  flag = false;
            
            if (flag) sum ++;
        }
        if (sum != 1) return false;
        
    }
    return true;
    
}

int main() {
    cin >> n;
    cin >> s;
    
    // n = s.size();
    
    // s[0] .. s[n - 1]
    
    for (int k = 1; k <= n; ++k)
        if (check(k)) {
            cout << k << endl;
            return 0;
        }

    return 0;
}