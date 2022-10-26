#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
inline bool judge(string s)
{
    int a, b, c, d, port;
    if (sscanf(s.c_str(), "%lld.%lld.%lld.%lld:%lld", &a, &b, &c, &d, &port) != 5)
        // 将 字符串 s 拆分成数字
        // 判断 != 5 实际上是看看成功读入的值有哪些
        // c_str 将lld的值转化为字符串读入
        return false;
    if (a < 0 || a > 255 || b < 0 || b > 255 || c < 0 || c > 255 || d < 0 || d > 255 || port < 0 || port > 65535)
        return false;
    // 值越界，不符
    stringstream ss;
    // 将数字转化成字符串 ss，此处是自动省略前导零
    ss << a << '.' << b << '.' << c << '.' << d << ':' << port;
    return ss.str() == s; // 如果有前导零或格式不服，即原字符串不与构造后的字符串相等，判断。
}
map<string, int> mp; // mp 为服务器列表
string op, ad;
signed main()
{
    cin >> n;
    // while (n--)
    for (int i = 1; i <= n; i++)
    {
        cin >> op >> ad;
        if (!judge(ad)) // judge 判断 ip 和端口是否合法
        {
            cout << "ERR" << endl;
            continue;
        }
        if (op[0] == 'S') // 是服务机
        {
            if (mp[ad])
                cout << "FAIL" << endl; // 如果有这台服务机，创建失败
            else
                mp[ad] = i, cout << "OK" << endl; // 否则可以，记录服务机编号
        }
        else
        {
            // for (auto it : mp) 也可以遍历一遍取值
            if (!mp.count(ad)) // count 函数，搜索是否有ad这个服务机
                cout << "FAIL" << endl;
            else
                cout << mp[ad] << endl; // 有则输出编号
        }
    }
    return 0;
}