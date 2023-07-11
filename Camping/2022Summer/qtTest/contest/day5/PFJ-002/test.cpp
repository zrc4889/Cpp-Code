#include <bits/stdc++.h>
using namespace std;
struct p
{
    int start;
    int end;
} s[1145141];
int n;
int ans;
int sum;
bool cmp(p x, p y)
{
    // return x.end > y.end;
    return x.end < y.end;
}
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
            cin >>
        n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i].start;
        cin >> s[i].end;
    }
    sort(s + 1, s + n + 1, cmp);
    int j = 1;
    ans = s[1].end;
    sum++;
    while (j <= n)
    {
        j++;
        if (s[j].start >= ans)
        {
            ans = s[j].end;
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}