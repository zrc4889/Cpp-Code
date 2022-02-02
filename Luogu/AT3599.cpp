#include <bits/stdc++.h>
using namespace std;

int ans = 1, n, k;
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
    {
        ans = min(ans*2, ans+k);
    }
    cout<<ans;
    system("pause");
    return 0;
}