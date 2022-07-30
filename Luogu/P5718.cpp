#include <bits/stdc++.h>
using namespace std;
const int _ = 1005;
int a[_];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + n);
    cout << a[1];
    return 0;
}