#include <bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>, greater<int> > q;
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        int n;
    cin >> n;
    int op;
    int x;
    while (n--)
    {
        cin >> op;
        if (op == 1)
        {
            cin >> x;
            q.push(x);
        }
        else if (op == 2)
        {
            cout << q.top() << endl;
        }
        else if (op == 3)
        {
            q.pop();
        }
    }
    return 0;
}