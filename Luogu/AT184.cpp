#include <bits/stdc++.h>
using namespace std;
typedef long long ll; // 定义longlong为ll
double x[1000], y[1000], ans = 0;
ll n;
double dis(int a, int b)
{
    return sqrt(pow(x[a] - x[b], 2) + pow(y[a] - y[b], 2));
    // 点距离公式
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            ans = fmax(ans, dis(i, j)); // fmax 为浮点数型的最大数值函数，反之亦然，同fmin
            // fmin()
    cout << ans << endl; // AT 注意换行
    return 0;
}