#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#define ll long long
using namespace std;
long long n, m, fac[28], vst[30], a[30], x;
char op;
void init()
{
    for (int i = 0; i <= 28; i++) 
        fac[i] = 1;
}
ll contor(ll x[]) 
{
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        int tag = 0; 
        for (int j = i + 1; j <= n; j++) {
            if (x[i] > x[j])
                tag++; 
        }
        ans += tag * fac[n - i];
    }
    return ans + 1;
}
void recontor(ll x)
{
    memset(vst, 0, sizeof(vst));
    x--;
    ll k;
    for (int i = 1; i <= n; i++) {
        ll ans = x / fac[n - i];
        for (int j = 1; j <= n; j++) {
            if (!vst[j]) {
                if (!ans)  
                {
                    k = j;
                    break;  
                }
                ans--;
            }
        }
        printf("%d ", k);
        vst[k] = 1;     
        x %= fac[n - i]; 
    }
    printf("\n");
}
int main() {
    scanf("%lld%lld", &n, &m);
    init();
    for (int i = 1; i <= n; i++) fac[i] = i * fac[i - 1]; 
    for (int i = 1; i <= m; i++) {
        cin >> op;  
        if (op == 'P') {
            scanf("%lld", &x);
            recontor(x);  
        }
        if (op == 'Q') {
            for (int i = 1; i <= n; i++) scanf("%lld", &a[i]); 
            printf("%lld\n", contor(a));
        }
    }
    return 0;
}