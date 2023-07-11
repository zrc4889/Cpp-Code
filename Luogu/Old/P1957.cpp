#include <bits/stdc++.h>
// #define stri [1145];
using namespace std;
int c, d;
char s[1145], t[1145];
char op;
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        if (t[0] >= 'a' && t[0] <= 'z')
        // 若是运算符
        {
            op = t[0];
            // 记录运算符
            cin >> c >> d;
            // 输入剩下的数字
        }
        else
        {
            // 不是运算符
            sscanf(t, "%d", &c);
            // b 转成数字 存到 c
            cin >> d;
            // 继续以数字形式读入剩下的
        }
        memset(s, 0, sizeof s);
        // 将一些数字按照一定格式打印到字符串
        if (op == 'a')
            sprintf(s, "%d+%d=%d", c, d, c + d);
        else if (op == 'b')
            sprintf(s, "%d-%d=%d", c, d, c - d);
        else if (op == 'c')
            sprintf(s, "%d*%d=%d", c, d, c * d);
        cout << s << endl
             << strlen(s) << endl;
    }
    return 0;
}