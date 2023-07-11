#include <bits/stdc++.h>
using namespace std;

int n;
int judge(int k)
{
    if (k == 1)
        return 0;
    if (k == 2)
        return 1;
    for (int i = 2; i * i <= k; i++)
    {
        if (k % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n;
    int t = 0;
    int l = n;
    for (int i = 1; i < n; i++)
    {
        if (judge(i))
        {
            if (l - i < 0)
                break;
            cout << i << endl;
            l -= i;
            t++;
        }
    }
    cout << t << endl;
    return 0;
}