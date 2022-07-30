#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int id;
    double water;
} a[1010];
bool cmp(Node x, Node y)
{
    if (x.water == y.water)
        return x.id < y.id;
    else
        return x.water < y.water;
}
int n;
int main()
{

    cin >> n;
    int i = 1;
    for (int j = 1; j <= n; j++)
    {
        cin >> a[j].water;
        a[j].id = j;
    }
    double ans = 0;
    // double sum = 0;
    sort(a + 1, a + 1 + n, cmp);
    for (i = 1; i <= n; i++)
        cout << a[i].id << " ";
    cout << endl;
    
    for (int j = n - 1; j >= 1; j--)
    {
        i = n - j; // n - j 
        ans += a[i].water * j;
    }
    printf("%.2f", ans / n);
    return 0;
}