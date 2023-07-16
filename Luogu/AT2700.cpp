#include <bits/stdc++.h>
using namespace std;
long long q, h, s, d;
long long n;
int main()
{
    cin >> q >> h >> s >> d >> n;
    long long ans = min(min(q * 4, h * 2), s); // 最省的
    cout << min(ans * n, (n / 2 * d + n % 2 * ans)) << endl;
    /*不采用两升的方案*/ /*两升的部分*/ /*不够整的部分*/ /*采用两升的方案*/
    return 0;
}