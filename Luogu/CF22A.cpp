#include <bits/stdc++.h>
using namespace std;
int a[10001];
int main()
{
    int n;
    cin >> n;
    int i;
    // n<2时无解，整个数组相同无解
    for (i = 1; i <= n; ++i)

        cin >> a[i];
    sort(a + 1, a + n + 1);
    for (i = 1; i <= n; ++i)
    {
        if (a[i] > a[1])
        {
            cout << a[i];
            return 0;
        }
    }
    cout << "NO";
    return 0;
}