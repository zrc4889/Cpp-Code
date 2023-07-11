#include <bits/stdc++.h>
using namespace std;
int n;
void solve()
{
    cin >> n;
    int x = 0;
    for (int i = 1; i <= n; i++)
    {
        int y;
        cin >> y;
        x ^= y;
    }
    if (x == 0)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
    return;
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}