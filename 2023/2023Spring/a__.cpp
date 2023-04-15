#include <bits/stdc++.h>
using namespace std;

const int _ = 1e6;

int xx[_], yy[_];
int ux[_], uy[_];

int dis(int x, int y, int xx, int yy)
{
    return abs(xx - x) + abs(yy - y);
}

int main()
{
    // start here..

    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        int x, y;
        cin >> x >> y;
        xx[i] = x, yy[i] = y;
        ux[i] = x, uy[i] = y;
    }

    sort(xx + 1, xx + 1 + n);
    sort(yy + 1, yy + 1 + n);

    // 中位数
    int px, py;

    if (n % 2 == 1)
    {
        // 是奇数
        px = xx[(n + 1) / 2];
        py = yy[(n + 1) / 2];
    }
    else if (n % 2 == 0)
    {
        px = (xx[n / 2] + xx[n / 2 + 1]) / 2;
        py = (yy[n / 2] + yy[n / 2 + 1]) / 2;
    }
    // cout << px << ' ' << py << endl; 
    int ans = 0;
    for (int i = 1; i <= n; ++i)
        ans += dis(px, py, ux[i], uy[i]);
    cout << ans << endl;
    return 0;
}
