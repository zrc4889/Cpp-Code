#include <bits/stdc++.h>
#define int long long 
using namespace std;

const int _ = 1e6 + 10;
int t[_], w[_];

struct Node{
    int l, r;
} a[_];

bool cmp(Node a, Node b)
{
    return a.r < b.r;
}

signed main()
{
    // start here..
    
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) scanf("%d", &t[i]);
    for (int i = 1; i <= n; ++i) sacnf("%d", &w[i]);
    
    for (int i = 1; i <= n; ++i)
    {
        a[i].l = t[i] - w[i], a[i].r = t[i] + w[i];
    }

    sort(a + 1, a + 1 + n, cmp);

    int end = a[1].r, sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (end <= a[i].l)
            end = a[i].r, sum += w[i];
    }

    cout << sum << endl;
    return 0;
}