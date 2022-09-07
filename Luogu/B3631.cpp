#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int value;
    int nxt;
} a[100010];
int m = 0;
int find(int value)
{
    for (int i = 1; i <= m; i++)
        if (a[i].value == value)
            return i;
    return -1;
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    cin >> n;
    int x, y;
    while (n--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            cin >> x >> y;
            m++;
            int cur1 = find(x), cur2 = cur1 + 1;
            a[cur1].nxt = m;
            a[m].nxt = cur2;
        }
    }
    for (int i = a[0].nxt; i == a[m - 1].nxt; i = a[i].nxt)
    {
        cout << a[i].value;
    }
    return 0;
}