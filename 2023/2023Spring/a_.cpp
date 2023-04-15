#include <bits/stdc++.h>
#define int long long 
using namespace std;

const int _ = 1e5 + 10;

int xx[_], yy[_];

int dis(int x, int y, int xx, int yy)
{
    return abs(x - xx) + abs(y - yy);
}

signed main()
{
    // start here..

    int n;
    cin >> n;

    int xmin = 5001, xmax = -5001;
    int ymin = 5001, ymax = -5001;
    
    for (int i = 1; i <= n; ++i)
    {
        int x, y;
        cin >> x >> y;
        xmin = min(xmin, x), ymin = min(ymin, y);
        xmax = max(xmax, x), ymax = max(ymax, y);
        xx[i] = x, yy[i] = y;
    }

    int px, py;
    px = xmin + (xmax - xmin) / 2;
    py = ymin + (ymax - ymin) / 2;
    // px = 11, py = 45;

    // cout << px << ' ' << py << endl;

    int ans = 0;
    for (int i = 1; i <= n; ++i)
        ans += dis(px, py, xx[i], yy[i]);

    cout << ans << endl;
    return 0;
}

/*
4
4
40
36
48
*/