#include <bits/stdc++.h>
using namespace std;
int n, a[100000], b[100000];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i], b[i] = a[i]; // copy a array to b array
    sort(b + 1, b + n + 1);
    int ans = 0;
    for (int i = 1; i <= n; ++i)
        if (a[i] != b[i])
            ans++; // See which elements in the array have changed
    if (ans != 0)
        ans--;
    cout << ans << endl;
    return 0;
}