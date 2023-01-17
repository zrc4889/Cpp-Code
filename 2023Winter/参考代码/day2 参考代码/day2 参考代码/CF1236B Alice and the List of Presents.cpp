#include <bits/stdc++.h>
using namespace std; 
#define rg register 
#define sc scanf 
#define pf printf 
typedef long long ll; 
const int mod = 1e9+7;

ll qpow ( ll base, ll n ) {
    ll ans = 1;
    while ( n ) {
        if ( n&1 ) ans = ans*base%mod;
        base = base*base%mod;
        n >>= 1;
    }
    return ans;
}

int main(){

	ll n, m;
	cin >> n>> m;
	cout << qpow( qpow(2,m)-1, n );
	return 0;
}