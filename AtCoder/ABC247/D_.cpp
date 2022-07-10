#include <bits/stdc++.h>
#define int long long
using namespace std;
queue<pair<int, int>> q;
int Q;
signed main()
{
    cin >> Q;
    while (Q--)
    {
        int op, x, c;
        cin >> op;
        if (op == 1)
        {
            cin >> x >> c;
            q.push(make_pair(x, c));
        }
        else
        {
            cin >> c;
            int sum = 0;
            while (c > 0 && !q.empty())

            {
                if (c >= q.front().second)
                {
                    c -= q.front().second;
                    sum += q.front().second * q.front().first;
                    q.pop();
                }
                else
                {
                    sum += c * q.front().first;
                    q.front().second -= c;
                    c = 0;
                }
            }
            cout << sum << endl;
        }
    }
}