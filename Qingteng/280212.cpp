#include <bits/stdc++.h>
using namespace std;
stack<char> s;

int getPriority(char t)
{
    if (t == '*' || t == '/')
        return 2;
    else if (t == '+' || t == '-')
        return 1;
    else if (t == '(')
        return -11;
    else if (t == ')')
        return 0;
}

string trans(string expr)
{
    string post;
    int len = expr.size();
    for (int i = 0; i < len; i++)
    {
        char cur = expr[i];
        if (cur == '(')
            s.push(cur);
        else if (cur == ')')
        {
            while (!s.empty() && s.top() != '(')
            {
                post.push_back(s.top());
                s.pop();
            }
            s.pop();
        }
        else if ('0' <= cur && cur <= '9')
            post.push_back(cur);
        else
        {
            // 四则运算
            while (!s.empty() && getPriority(s.top()) >= getPriority(cur))
            {
                post.push_back(s.top());
                s.pop();
            }
            s.push(cur);
        }
    }
    while (!s.empty())
    {
        if (s.top() == '(')
        {
            cout << "NO" << endl;
            exit(0);
        }
        post.push_back(s.top());
        s.pop();
    }
    return post;
}

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    string expr;
    getline(cin, expr);
    expr.pop_back();
    expr = trans(expr);
    int len = expr.size();

    // 1、左右括号不匹配 2、运算数不合法

    // for (int i = 0; i < len; i++)
    //     cout << expr[i];
    // cout << endl;

    int tmp = 0;

    stack<int> q;
    int x, y;
    for (int i = 0; i < len; i++)
    {
        if (expr[i] == '+')
        {
            if (q.size() < 2)
                return cout << "NO" << endl, 0;
            x = q.top();
            q.pop();
            y = q.top();
            q.pop();
            q.push(y + x);
            continue;
        }
        if (expr[i] == '-')
        {
            if (q.size() < 2)
                return cout << "NO" << endl, 0;
            x = q.top();
            q.pop();
            y = q.top();
            q.pop();
            q.push(y - x);
            continue;
        }
        if (expr[i] == '*')
        {
            if (q.size() < 2)
                return cout << "NO" << endl, 0;
            x = q.top();
            q.pop();
            y = q.top();
            q.pop();
            q.push(y * x);
            continue;
        }
        if (expr[i] == '/')
        {
            if (q.size() < 2)
                return cout << "NO" << endl, 0;
            x = q.top();
            q.pop();
            y = q.top();
            q.pop();
            if (x == 0)
                return cout << "NO" << endl, 0;
            q.push(y / x);
            continue;
        }
        if ('0' <= expr[i] && expr[i] <= '9')
        {
            q.push(expr[i] - '0');
            continue;
        }
        else
        {
            return cout << "NO" << endl, 0;
        }
    }
    if (q.size() > 2)
        return cout << "NO" << endl, 0;
    cout << q.top() << endl;
    return 0;
}