#include <bits/stdc++.h>
using namespace std;
int a[55], n, k;
int sum = 0;
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
    {
        if (a[i] + sum <= k)
            sum += a[i];
    }
    cout<<sum;
    
}