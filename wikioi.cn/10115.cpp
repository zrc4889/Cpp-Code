#include <bits/stdc++.h>
using namespace std;
stack<int> s;
int n, op, temp;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> op;
        if (op == 1)
        {
            cin >> temp;
            s.push(temp);
        }
        else if (op == 2)
        {
            s.pop();
        }
    }
    if (s.empty())
    {
        cout << "impossible!";
    }
    else
    {
        cout << s.top();
    }
    return 0;
}