#include <bits/stdc++.h>
using namespace std;
struct lap
{
    int p, m;
} a[1000000];

bool cmp(lap x, lap y)
{
    return x.p < y.p;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i].p >> a[i].m;
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i < n; ++i)
    {
        if (a[i].m > a[i + 1].m)
        {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }
    cout << "Poor Alex" << endl;
    return 0;
}
