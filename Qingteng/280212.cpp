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
    string expr;
    getline(cin, expr);
    expr.pop_back();
    expr = trans(expr);
    int len = expr.size();
    // cout << expr << endl;

    stack<int> q;

    for (int i = 0; i < len; i++)
    {
        char cur = expr[i];
        if (q.size() < 2)
        {
            cout << "NO" << endl;
            return 0;
        }
        if ('0' <= cur && cur <= '9')
        {
            q.push(cur - '0');
        }
        else
        {
            int x, y;
            switch (cur)
            {
            case '+':

                x = q.top();
                q.pop();
                y = q.top();
                q.pop();
                q.push(y + x);
                break;

            case '-':
                x = q.top();
                q.pop();
                y = q.top();
                q.pop();
                q.push(y - x);
                break;
            case '*':
                x = q.top();
                q.pop();
                y = q.top();
                q.pop();
                q.push(y * x);
                break;
            case '/':
                x = q.top();
                q.pop();
                y = q.top();
                q.pop();
                q.push(y / x);
                break;
            }
        }
    }

    cout << q.top() << endl;

    return 0;
}