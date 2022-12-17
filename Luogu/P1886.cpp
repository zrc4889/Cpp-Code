#include <bits/stdc++.h>
using namespace std;
const int _ = 1e6 + 10;
int n, k;
struct node
{
    int n, m;
} a[_];
deque<node> q;
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].m;
        a[i].n = i;
    }
    for (int i = 1; i <= n; i++)
    {
        // 实质是倒过来的队列

        while (!q.empty() && a[i].m <= q.front().m)
            q.pop_front();
        q.push_front(a[i]);

        // pop 掉所有不满足的数，保持单调性

        while (q.back().n <= i - k)
            q.pop_back();

        // 在窗子之外，过期咯

        if (i >= k)
            cout << q.back().m << ' ';

        // 只有至少满足了一个窗子的距离才可以输出
    }

    q.clear();
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        // 实质是倒过来的队列

        while (!q.empty() && a[i].m > q.front().m)
            q.pop_front();
        q.push_front(a[i]);

        // pop 掉所有不满足的数，保持单调性

        while (q.back().n <= i - k)
            q.pop_back();

        // 在窗子之外，过期咯

        if (i >= k)
            cout << q.back().m << ' ';

        // 只有至少满足了一个窗子的距离才可以输出
    }

    return 0;
}