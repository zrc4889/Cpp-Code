#include <bits/stdc++.h>
using namespace std;
map<int, long long> a;
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    int q;
    cin >> n;
    // 入乡随俗
    for (int i = 1; i <= n; i++)
        cin >>
            a[i];
    cin >> q;
    int tmp = 0;
    while (q--)
    {
        int op;
        int x;
        int i;
        cin >> op;
        switch (op)
        {
        case 1:
            cin >> x;
            a.clear();
            tmp = x;
            break;
        case 2:
            cin >> i >> x;
            a[i] += x;
            break;
        case 3:
            cin >> x;
            cout << a[x] + tmp << endl;
        }
    }
    return 0;
}