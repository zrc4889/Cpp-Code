#include <bits/stdc++.h>
#define int long long
using namespace std;

const int p = 19260817;
int a, b;

int read() {
  int x = 0, w = 1;
  char ch = 0;
  while (ch < '0' || ch > '9') { 
    if (ch == '-') w = -1;       
    ch = getchar();             
  }
  while (ch >= '0' && ch <= '9') {
    x = (x * 10  + (ch - '0')) % p; 
    ch = getchar(); 
  }
  return (x * w) % p;
}


int ksm(int a, int n)
{
    int ans = 1;
    while (n)
    {
        if (n & 1)
            ans = (ans * a) % p;
        a = (a * a) % p;
        n >>= 1;
    }
    return (ans % p + p) % p;
}

signed main()
{
    ios::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr);
    // 费马小定理

    a = read() % p, b = read() % p;
    if (b == 0) cout << "Angry!\n";
    else cout << (a * ksm(b, p - 2)) % p << '\n';
    
    return 0;
}