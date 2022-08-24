#include <bits/stdc++.h>
using namespace std;
int f(  int x)
{
    if (x <= 2)
        return 1;
    int ans = f(x - 1) + f(x - 2);
    ans %= 10000;
    return ans;
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    f(12345);
    return 0;
}