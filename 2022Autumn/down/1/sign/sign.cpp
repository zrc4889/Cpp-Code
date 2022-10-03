#include <bits/stdc++.h>
using namespace std;
// const int _  = 1e9;
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    cin >> n;
    while (n--)
    {

        int ans;
        cin >> ans;
        int sum;
        sum = 1 << int(log2(ans));
        sum--;
        cout << sum << endl;
        // a[i] = sum;
    }
    // for (int i=1;i<=n;i++) cout << a[i] << endl;
    return 0;
}