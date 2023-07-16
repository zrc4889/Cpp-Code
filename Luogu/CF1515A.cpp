#include <bits/stdc++.h>
using namespace std;
long long a[10001];
void tmain()
{

    long long n, x;
    cin >> n;
    long long s = 0;
    for (int i = 1; i <= n; ++i)
        cin >> a[i], s += a[i];
    if (s == x)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    sort(a + 1, a + n + 1);
    s = 0;
    for (int i = 1; i <= n; ++i)
    {
        s += a[i];
        if (s == x)
            swap(a[i], a[i + 1]);
        cout << a[i];
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        tmain();
}