#include <bits/stdc++.h>
using namespace std;
stack<int> s;
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    char a;
    int tmp;
    while (1)
    {
        a = getchar();
        if (a == '@')
            break;
        // 判断数字
        if ('0' <= a && a <= '9')
        {
            tmp = tmp * 10 + (a - '0');
        }
        if (a == ' ')
        {
            s.push(tmp);
            tmp = 0;
        }
        switch (a)
        {
        case '+':
        {
            int x = s.top();
            s.pop();
            int y = s.top();
            s.pop();
            s.push(y + x);
            break;
        }
        case '-':
        {
            int x = s.top();
            s.pop();
            int y = s.top();
            s.pop();
            s.push(y - x);
            break;
        }
        case '*':
        {
            int x = s.top();
            s.pop();
            int y = s.top();
            s.pop();
            s.push(y * x);
            break;
        }
        case '/':
        {
            int x = s.top();
            s.pop();
            int y = s.top();
            s.pop();
            s.push(y / x);
            break;
        }
        }
    }
    cout << s.top() << endl;
    return 0;
}