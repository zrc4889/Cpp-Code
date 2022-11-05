#include <bits/stdc++.h>
using namespace std;
int s[5];
int a[21][5];
int L, R;
int ans, minx;
void search(int x, int y)
{
    // y 为编号
    if (x > s[y])
    {
        minx = min(minx, max(L, R));
        // 左右脑取最大取 minx
        return;
        // 注意return
    }
    L += a[x][y];
    search(x + 1, y);
    L -= a[x][y];
    R += a[x][y];
    search(x + 1, y);
    R -= a[x][y];
    return;
}

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    for (int i = 1; i <= 4; i++)
        cin >> s[i];
    for (int i = 1; i <= 4; i++)
    {
        L = R = 0;
        minx = INT_MAX;
        for (int j = 1; j <= s[i]; j++)
            cin >> a[j][i];
        search(1, i);
        // 第 i 门科，第 1 件功课
        ans += minx;
    }
    cout << ans << endl;
    return 0;
}