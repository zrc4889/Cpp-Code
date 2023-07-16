#include <bits/stdc++.h>
using namespace std;
int a[10];
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        int T;
    cin >> T;
    while (T--)
    {
        memset(a, 0, sizeof a);
        int x;
        for (int i = 1; i <= 4; i++)
        {
            cin >> x;
            a[x]++;
        }
        int f1 = 0, f2 = 0;

        for (int s = 0; s <= 9; s++)
        {
            f1 = f2 = 0;
            a[s]++;
            int t;
            // 优先判断重复的
            for (int i = 0; i <= 9; i++)
            {
                if (a[i] >= 2)
                {
                    a[i] -= 2, f1 = 1, t = i;
                    break;
                }
            }
            for (int i = 0; i <= 9; i++)
            {
                if (a[i - 1] >= 1 && a[i] >= 1 && a[i + 1] >= 1)
                {
                    f2 = 1;
                    break;
                }
            }
            if (f1 == 1)
                a[t] += 2;
            a[s]--;
            if (f1 && f2)
            {
                // cout << 1 << endl;
                break;
            }
            else
                continue;
        }
        if (f1 && f2)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}