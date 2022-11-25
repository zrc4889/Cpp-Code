#include <bits/stdc++.h>
using namespace std;
string a[101];
string expr;
int f[1145];
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> expr;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[i] = 1;
    }

    int maxx = -1;

    for (int i = 1; i <= n; i++)
    {
        // expr[i];
        char cur = expr[i];
        for (int j = 1; j <= n; j++)
        {
            if (a[j][0] == cur)
            {
                f[i] = max(f[i], f[j] + 1);
                // 退化贪心了。。。
            }
        }
        maxx = max(maxx, f[i]);
    }

    cout << maxx << endl;

    return 0;
}