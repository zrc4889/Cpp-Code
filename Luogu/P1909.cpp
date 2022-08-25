#include <bits/stdc++.h>
using namespace std;
int num[4], sto[4];
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int x;
    cin >> x;
    int ans = 1e9;
    for (int i = 1; i <= 3; i++)
    {
        int j = 0;
        cin >> num[i] >> sto[i];
        while (num[i] * ++j < x)
            ;
        ans = min(ans, sto[i] * j);
    }
    cout << ans << endl;
    return 0;
}