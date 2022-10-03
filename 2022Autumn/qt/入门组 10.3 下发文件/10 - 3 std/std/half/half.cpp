#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int ll;
ll lcm(ll a, ll b) {
    return a / __gcd(a, b) * b;
}
int main(){
    freopen("half.in", "r", stdin);
    freopen("half.out", "w", stdout);
    ll N, M;
    ll total=1, p;
    cin >> N >> M;
    vector<int> A;
    // cout << lcm(N, M) << endl;

    for(int i=0; i<N; i++){
        cin >> p;
        A.push_back(p/2);
        total = lcm(total, p/2);
        if(total > M){
            cout << 0 << endl;
            return 0;
        }
    }
    for(int i=0; i<N; i++){
        if((total/A[i])%2==0){
            cout << 0 << endl;
            return 0;
        }
    }

    if(total > M){
        cout << 0 << endl;
    }else{
        cout << (M-total)/ (2*total) + 1<< endl;
    }
}