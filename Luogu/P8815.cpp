#include <bits/stdc++.h>
using namespace std;

// TODO

stack<char> op;
string expr;

struct Node
{
    int val, and_cnt, or_cnt;
};

int getPriority(char c)
{
    // int getPriority(char:c)

    if (c == '&')
        return 4;
    else if (c == '|')
        return 3;
    return 1; // 左右括号
}

string trans(string expr)
{
    // string trans(string:expr) 将一个中缀表达式转换为后缀表达式

    // 1、优先级大于等于我；2、左括号匹配右括号；3、最后还剩下运算符，弹到清空为止。

    string post = "";

    int len = expr.size();

    for (int i = 0; i < len; ++i)
    {
        char c = expr[i];
        // 括号，运算符，数字！
        if (c == '(') // 2、左括号匹配右括号
            op.push(c);

        else if (c == ')')
        {
            while (!op.empty() && op.top() != '(')
            {
                post.push_back(op.top());
                op.pop();
            }
            op.pop(); // 再 pop 左括号
        }
        else if (c == '&' || c == '|')
        {
            while (!op.empty() && (getPriority(op.top()) >= getPriority(c))) // 1、优先级大于等于我
            {
                post.push_back(op.top());
                op.pop();
            }
            op.push(c);
        }
        else if (c == '1' || c == '0') // 最初写成与了qwq
        {
            post.push_back(c);
        }
    }
    while (!op.empty())
    {
        post.push_back(op.top());
        op.pop();
    }

    return post;
}

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> expr;

    expr = trans(expr);

    // cout << expr;

    stack<Node> s;

    int len = expr.size();

    for (int i = 0; i < len; i++)
    {
        char c = expr[i];
        if (c == '1' || c == '0')
        {
            s.push({c - '0', 0, 0});
        }
        else if (c == '&' || c == '|')
        {
            Node r = s.top();
            s.pop();
            Node l = s.top();
            s.pop();

            // TODO

            if (c == '&')
            {
                s.push({l.val & r.val,
                        l.val == 0 ? l.and_cnt + 1 : l.and_cnt + r.and_cnt,
                        l.val == 0 ? l.or_cnt : l.or_cnt + r.or_cnt});
            }

            if (c == '|')
            {
                s.push({l.val | r.val,
                        l.val == 1 ? l.and_cnt : l.and_cnt + r.and_cnt,
                        l.val == 1 ? l.or_cnt + 1 : l.or_cnt + r.or_cnt});
            }
        }
    }

    // if (s.empty()) cout << 1 << endl;

    Node ans = s.top();

    cout << ans.val << endl
         << ans.and_cnt << ' ' << ans.or_cnt << endl;

    return 0;
}