#include <bits/stdc++.h>
#define int long long 
using namespace std;

const int _ = 1e6;

struct Node{
    int x, y;
}a[_];

int dis(int x, int y, int xx, int yy)
{
    return abs(x - xx) + abs(y - yy);
}

signed main()
{
    // start here..

    int n;
    cin >> n;

    int totx, toty;
    totx = toty = 0;

    for (int i = 1; i <= n; ++i)
    {
        int x, y;
        cin >> x >> y;
        totx += x, toty += y;
        a[i].x = x, a[i].y = y;
    }

    totx = totx / n, toty = toty / n;

    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += dis(totx, toty, a[i].x, a[i].y);       
    }
    cout << sum << endl;
    return 0;
}