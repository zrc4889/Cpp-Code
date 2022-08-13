#include <bits/stdc++.h>
using namespace std;
queue<int> q;
int main()
{
    #ifdef LOCAL
        LOCALfo
    #endif
    int n;
    cin >> n;
    while (n--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int x;
            cin >> x;
            q.push(x);
        }
        else if (op == 2)
        {
            if (q.empty())
            {
                cout << "ERR_CANNOT_POP" << endl;
                continue;
            }
            else
                q.pop();
        }
        else if (op == 3)

        {
            if (q.empty())
            {
                cout << "ERR_CANNOT_QUERY" << endl;
                continue;
            }
            else
                cout << q.front() << endl;
        }
        else if (op == 4)
        {
            cout << q.size() << endl;
        }
    }
    return 0;
}