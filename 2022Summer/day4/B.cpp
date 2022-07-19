#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;
map<int, int> m;
int a[N], fa[N];
int find(int x) // 找爹
{
    if (fa[x] == x)
        return x;
    return fa[x] = find(fa[x]);
}
void un(int u, int v)
{
    int f1 = find(u);
    int f2 = find(v);
    fa[f2] = f1;
}
bool judge(int u, int v)
{
    return find(u) == find(v);
}
signed main()
{
    freopen("palindrome.in", "r", stdin);
    freopen("palindrome.out", "w", stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        fa[i] = i; // 初始化
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n; ++i)
    {
        if (m[a[i]] == 0)
            m[a[i]] = i;
        else
            un(i, m[a[i]]);
    }
    int head = 1, tail = n, cnt = 0;
    while (head < tail)
    {
        if (judge(head, tail)) // 判断
        {
            head++;
            tail--;
            continue;
        }
        un(head, tail);
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}