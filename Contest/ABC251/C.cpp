#include <bits/stdc++.h>
using namespace std;
int n;
const int N = 1e5 + 5;
struct S
{
    string s;
    int sc;
    int l;
} a[N];
bool cmp(S x, S y)
{
    if (x.s == y.s)
    {
        if (x.sc > y.sc)
            return false;
        else
            return true;
    }
    else
    {
        if (x.sc > y.sc)
            return false;
        else
            return true;
    }
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].s >> a[i].sc;
        a[i].l = i;
    }
    sort(a + 1, a + 1 + n, cmp);
    for (int i = 1; i <= n; ++i)
    {
        cout << a[i].l << " " << a[i].s << " " << a[i].sc << endl;
    }
    cout << a[n].l;
    return 0;
}