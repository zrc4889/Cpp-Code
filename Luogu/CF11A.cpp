#include <bits/stdc++.h>
using namespace std;
int a[10001];
int n, d;
int cnt = 0;
int main()
{
    cin >> n;
    cin >> d;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        // 从后面反推 i-1
        if (a[i] <= a[i - 1])
        {
            // int x = ;
            cnt += (a[i - 1] - a[i]) / d + 1;
            a[i] += ((a[i - 1] - a[i]) / d + 1) * d;
        }
    }
    cout << cnt;
    // system("pause");
    return 0;
}