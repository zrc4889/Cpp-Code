#include <bits/stdc++.h>
using namespace std;
const int _ = 205;
double f[_];
struct Node
{
    int id;
    double code;
    string c;
} a[_];
bool cmp(Node x, Node y)
{
    return x.id < y.id;
}
string numToString(int num)
{
    // 包括小数
}
int main()
{
    freopen("wedding.in", "r", stdin);
    freopen("wedding.out", "w", stdout);
    int n = 0;
    while (cin >> f[n++])
    n--;
    // cout << n << endl;
    int mid = n / 2;
    // for (int i = 0; i < n; i++)
    //     cout << f[i] << ' ';
    for (int i = 0; i <= mid - 1; i++)
        a[i].id = f[i];
    for (int i = mid; i < n; i++)
        a[i - mid].code = f[i];
    sort(a, a + mid, cmp);
    for (int i = 0; i < mid; i++)
        printf("%f\n", a[i].code);
    
}