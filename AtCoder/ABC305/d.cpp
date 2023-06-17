#include <bits/stdc++.h>
using namespace std;

const int _ = 2e5 + 10;
int L[_], R[_];

int main()
{
    // start here..

    int n;
    cin >> n;

    int start;
    cin >> start;

    int tot = (n - 1) / 2;

    for (int i = 1; i <= tot; ++i)
        cin >> L[i] >> R[i];

    int q;
    cin >> q;
    int l, r;
    while (cin >> l >> r)
    {
        int sum = 0;
        int minx = 2e4 + 8, maxx = 1;
        // int gl = 0;

        for (int i = 1; i <= tot; ++i)
            if (L[i] >= l && R[i] <= r)
            {
                // minx = min(minx, i), maxx = max(maxx, i);
                sum += R[i] - L[i];
                // gl++;
            }
        // if (gl == 0)
        // {
        // 没有一个完整片段
        for (int i = 1; i <= tot; ++i)
        {
            if (L[i] <= l && l <= R[i])
                sum += R[i] - l;
            if (L[i] <= r && r <= R[i])
                sum += r - L[i];
        }
        // }
        // else
        // {
        // if (L[minx - 1] <= l && l <= R[minx - 1])
        // sum += R[minx - 1] - l;
        // if (L[maxx + 1] <= r && r <= R[maxx + 1])
        // sum += r - L[maxx + 1];
        // }
        cout << sum << endl;
    }

    return 0;
}