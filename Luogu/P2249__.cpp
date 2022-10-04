#include <bits/stdc++.h>
using namespace std;
int n, m;
const int _ = 1e6 + 10;
int a[_];
int find(int val)
{
    int l, r, mid;
    l = 1, r = n;
    while (l < r)
    {
        mid = l + (r - l) / 2; // 保险算法
        if (a[mid] >= val) // 注意条件
            r = mid;
        else
            l = mid + 1; // mid 不加 1 就是 l 变化
    }
    if (a[l] == val)
        return l; // 判定一定是 l
    else
        return -1;
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    while (m--)
    {
        int val;
        cin >> val;
        cout << find(val) << ' ';
    }
    return 0;
}