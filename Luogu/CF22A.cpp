#include <bits/stdc++.h>
using namespace std;
int a[101];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    // cout<<a[n-1]<<endl;
    for (int i = n - 2; i >= 0; --i)
        if (a[i] < a[n-1])
        {
            cout << a[i];
            // system("pause");
            return 0;
        }
    cout << "NO";
    // system("pause");
    return 0;
}