#include <bits/stdc++.h>
using namespace std;
int a[205];
int main()
{
    int n;
    cin >> n; // 求出所有因子个数后取最小的
    for (int i = 0; i < n; ++i)
    {
        int p = 0, k;
        cin >> k;
        while (k % 2 == 0)
        {
            p++;
            k /= 2;
        }
        a[i] = p;
    }
    sort(a, a + n);
    cout << a[0] << endl;
    // system("pause");
    return 0;
}