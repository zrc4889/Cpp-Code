#include <bits/stdc++.h>
using namespace std;
stack<int> q;
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    char a;
    int tmp = 0;
    int t1, t2;
    while (cin >> a && a != '@')
    {
        if (a == '+')
        {
            t1 = q.top();
            q.pop();
            t2 = q.top();
            q.pop();
            q.push(t2 + t1);
        }
        else if (a == '-')
        {
            t1 = q.top();
            q.pop();
            t2 = q.top();
            q.pop();
            q.push(t2 - t1);
        }
        else if (a == '*')
        {
            t1 = q.top();
            q.pop();
            t2 = q.top();
            q.pop();
            q.push(t2 * t1);
        }
        else if (a == '/')
        {
            t1 = q.top();
            q.pop();
            t2 = q.top();
            q.pop();
            q.push(t2 / t1);
        }

        else if (a == '.')
        {
            q.push(tmp);
            tmp = 0;
        }
        else
        {
            tmp = tmp * 10 + (a - '0');
        }
    }
    cout << q.top() << endl;
    return 0;
}