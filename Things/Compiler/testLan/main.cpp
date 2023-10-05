#include <bits/stdc++.h>
#define INT "INT"
#define PLUS "PLUS"
using namespace std;

// struct Token
// {
//     string type; // 类型：INT、PLUS、MINUS
//     string value;
//     // 类型转换
// };

struct Token
{
    string type;
    string val;

    // type : INT、PLUS、MINUS。
};

// 实验性内容
// 操作栈

vector<Token> op;
string str;

void scanner(string str)
{
    // scans one line
    // 词法分析

    int cur = 0;
    while (str[cur] != '\0')
    {
        char val;
        val = str[cur];
        string t;
        t.push_back(val);
        if (isdigit(val))
        {
            op.push_back((Token){INT, t});
        }
        else if (val == '+')
        {
            op.push_back((Token){PLUS, t});
        }
        else
        {
            op.push_back((Token){"NULL", t});
        }
        cur++;
    }
}

// void stoi(string s)
// {
    // null
// }

void calc()
{
    // 计算函数

    int num[3];
    int cnt = 1;
    for (auto cur : op)
    {
        if (cur.type == INT)
            num[cnt++] = stoi(cur.val);
        // 要自己写转换函数嗷
    }

    // 为未来实现连加做准备

    for (auto cur : op)
    {
        if (cur.type == PLUS)
        {
            cout << num[1] + num[2] << endl;
            return;
        }
    }
}

int main()
{
    // start here..

    while (getline(cin, str))
    {
        scanner(str);
        calc();
    }

    // for (auto cur : op)
    // {
    //     cout << cur.type << " : " << cur.val << endl;
    // }

    return 0;
}