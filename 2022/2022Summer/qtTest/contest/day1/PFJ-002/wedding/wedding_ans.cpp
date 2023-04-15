#include <bits/stdc++.h>
using namespace std;
const int _ = 1005;

struct Node
{
    int id;
    string s;
} b[_];
string a[_];
int sTi(string a)
{
    int ans = 0;
    int l = a.size();
    for (int i = 0; i < l; ++ i)
        ans = ans * 10 + a[i] - '0';
    return ans;
}
bool cmp(Node x, Node y)
{
    return x.id < y.id;
}
int main()
{
    freopen("wedding.in", "r", stdin);
    freopen("wedding.out", "w", stdout);

    string s;
    int n , m;
    while (cin >> s)
        a[++m] = s;
    n = m / 2;
    for (int i = 1; i <= n; ++i)
        b[i].id = sTi(a[i]);
    for (int i = 1; i <= n; ++i)
        b[i].s = a[i + n];
    sort(b + 1, b + 1 + n, cmp);
    for (int i = 1; i <= n; ++i)
        cout << b[i].s << endl;
    return 0;
}