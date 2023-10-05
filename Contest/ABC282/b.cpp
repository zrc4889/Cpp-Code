#include <bits/stdc++.h>
using namespace std;
string a[31];

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            // string tmp;
            int flag = 1;
            for (int k = 0; k < m; k++)
            {
                int a1 = a[i][k] == 'o' ? 1 : 0;
                int a2 = a[j][k] == 'o' ? 1 : 0;
                if (!(a1 || a2))
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
                sum++;
        }
    }
    cout << sum << endl;
    return 0;
}