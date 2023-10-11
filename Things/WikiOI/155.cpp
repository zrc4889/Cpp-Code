#include <bits/stdc++.h>
using namespace std;
const int _ = 114514;

int mem[_];
int ans = 0;
int f(int x)
{
    // 记忆化搜索必须返回一个值，故不可写 void

    if (mem[x])
        return mem[x];

    if (x == 1)
    {
        return 1;
        // 搜完了
    }

    int res = 0;

    // 记忆化搜索定要取一个值储存。
    // 用 res 来计数

    for (int i = 1; i <= x / 2; i++)
    {
        res += f(i);
        // ans++;
    }

    return mem[x] = res + 1;
}

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}