#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b) { return a > b; }
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n, cmp);
    int s = 0;
    for (int i = 0; i < n; ++i)
    {
        s += a[i];
        if (s >= k)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}