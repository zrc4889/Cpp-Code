#include <bits/stdc++.h>
using namespace std;
int a[55], n, k;
bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n, cmp); // 倒过来就是倒序啦
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += a[i];
    }
    cout << sum;
    return 0;
}