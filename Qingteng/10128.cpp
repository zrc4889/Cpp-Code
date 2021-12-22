#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int a[1000000], c[1000000];
int n, k;
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    cout << a[n - k + 1];
    /*记得把system去掉，不然被骂！！！！！！！！！！！！！！！！！*/
    // system("pause");
    return 0;
}
