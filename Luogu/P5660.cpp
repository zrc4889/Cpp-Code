#include <bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    int ans = 0;
    for (int i = 1; i <= 8; ++i)
    {
        cin >> x;
        if (x == '1')
            ans++;
    }
    cout << ans;
    return 0;
}