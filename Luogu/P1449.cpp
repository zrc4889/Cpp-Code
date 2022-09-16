#include <bits/stdc++.h>
using namespace std;
stack<int> a;

int main()
{
    char tmp;
    while (cin >> tmp && tmp != '@')
    {
        if (tmp == '+' || tmp == '-' || tmp == '*' || tmp == '/')
        {
            int cur1 = a.top();
            a.pop();
            int cur2 = a.top();
            a.pop();
            // switch (tmp)
            // {
            // case '+' /* constant-expression */:
            if (tmp == '+')
            {

                int t = cur2 + cur1;
                a.push(t);
            }
            if (tmp == '+')
            {

                int t = cur2 + cur1;
                a.push(t);
            }
            if (tmp == '-')
            {

                int t = cur2 - cur1;
                a.push(t);
            }
            if (tmp == '*')
            {

                int t = cur2 * cur1;
                a.push(t);
            }
            if (tmp == '/')
            {

                int t = cur2 / cur1;
                a.push(t);
            }
        }
        else if (tmp != '.')
            a.push(tmp - '0');
    }

    return 0;
}