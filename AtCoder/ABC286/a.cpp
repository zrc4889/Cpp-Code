#include <bits/stdc++.h>
using namespace std;
int a[1141514];
int main()
{
    // start here..

    int n;
    int l, r;
    int ll, rr;
    cin >> n;
    cin >> l >> r >> ll >> rr;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = l; i <= r; i++)
        swap(a[i], a[i + (rr - r)]);

    for (int i = 1; i <= n; i++)
        cout << a[i] << ' ';
    cout << endl;

    return 0;
}