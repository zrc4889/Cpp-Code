#include <bits/stdc++.h>

using namespace std;
struct node {
    int t, m;
} a[600];
int f[600];
bool cmp(const node x, const node y) { 
    return x.m > y.m; 
}

int main() {
    freopen("mouse.in", "r", stdin);
    freopen("mouse.out", "w", stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) 
        cin >> a[i].t;

    for (int i = 1; i <= n; i++) 
        cin >> a[i].m;

    sort(a + 1, a + n + 1, cmp);
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        
        for (int j = a[i].t; j >= 1; j --)
            if (f[j] == 0) {
                f[j] = 1;
                sum += a[i].m;
                break;
            }
    }
    
    cout << sum << endl;
    return 0;
}