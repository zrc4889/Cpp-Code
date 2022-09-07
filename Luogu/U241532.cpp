#include <bits/stdc++.h>
#define int long long
using namespace std;
const int _ = 1e6;
struct Node
{
    int val;
    int num;
    int p;
} a[_];
bool cmp(Node x, Node y)
{
    return x.val < y.val;
}
bool cmp2(Node x, Node y)
{
    return x.p < y.p;
}
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].val;
        a[i].p = i;
    }
    sort(a + 1, a + 1 + n, cmp);
    for (int i = 1; i <= n; i++)
        a[i].num = i;
    sort(a + 1, a + n + 1, cmp2);
    for (int i = 1; i <= n; i++)
        cout << a[i].num << ' ';
    return 0;
}