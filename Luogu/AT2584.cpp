#include <bits/stdc++.h>
using namespace std;
int a[100001];
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << a[n - 1] - a[0];
    // system("pause");
    return 0;
}