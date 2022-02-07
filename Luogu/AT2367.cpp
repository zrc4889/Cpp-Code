#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a[100010];
int main()
{

    int n, tot = 1, flag = 2, ans = 1;
    cin >> n >> a[1];
    for (int i = 2; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x != a[tot])
            a[++tot] = x; // 去重模板
    }
    for (int i = 2; i <= tot; i++)
    {
        // 第一个数
        if (flag == 2)                      // 这里是与前一个的值进行比较
            flag = (a[i - 1] > a[i]);       // 巧妙的地方，判断此子串是上升还是下降
        else if (flag != (a[i - 1] > a[i])) // 如果当前子串结束（即不符合子串上升或下降顺序条件）
            flag = 2, ans++;                // flag 归 -1，第一个
    }
    cout << ans;
    return 0; // 不知道为什么好多大佬都在这里写“拜拜了您嘞！”？
}