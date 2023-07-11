#include <bits/stdc++.h>
using namespace std;
// f
// f-1  f-2
// f == 0 ans++
int ans = 0;
void f(int step)
{
    if (step == 0)
    {
        ans++;
        return;
    }
    else if (step == 1)
    {
        f(0);
    }
    else
        f(step - 1), f(step - 2);
}
int main()
{
    // #ifdef LOCAL
    // LOCALfo
    // #endif
    int n;
    cin >> n;
    f(n);
    cout << ans;
    return 0;
}