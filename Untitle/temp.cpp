#include <bits/stdc++.h>
using namespace std;
map<string, int> table;
queue<string> q;
string a, b, x[20], y[20];
int t;
int main()
{
    cin >> a >> b;
    t = 1;
    while (cin >> x[t] >> y[t])
    {
        if (x[t] == "#")
        {
            t--;
            break;
        }
        t++;
    }
    q.push(a);
    table[a] = 0;
    // 记录a字符串
    while (!q.empty())
    {
        string cur = q.front();
        q.pop();
        // 拿出头部的字符串
        for (int k = 1; k <= t; ++k)
        {
            if (x[k].size() > cur.size())
                continue;
            for (int p = 0; p <= cur.size() - x[k].size(); ++p)
                if (cur.substr(p, x[k].size()) == x[k]) // 完全一样了
                {
                    string tmp = cur;
                    tmp.replace(p, x[k].size(), y[k]);
                    if (table.find(tmp) == table.end())
                    {
                        table[tmp] = table[cur] + 1;
                        if (table[tmp] <= 10)
                        {
                            if (tmp == b)
                            {
                                cout << table[tmp] << endl;
                                return 0;
                            }
                        }
                        q.push(tmp);
                    }
                }
        }
    }
    cout << "NO ANSWER!" << endl;
    return 0;
}