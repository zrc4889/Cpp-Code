#include <bits/stdc++.h>
#define int long long
using namespace std;
const int _ = 1e5 + 10;
int cnt[27]; // 统计字符
struct S
{
    string s;
    int x; // 评分
    int last;
    int i; // 编号
} a[_];

// 结构体数组排序
bool cmp(S x, S y)
{
    if (x.last == y.last)
    {
        // 尾字符相同
        if (x.x == y.x)
        {
            // 分值也相同？
            return x.i < y.i;
            // 最先读入的放前面
        }
        else if (x.x != y.x) // 保险一点
        {
            // 分值不一样
            // 返回大的在前面
            return x.x > y.x;
        }
    }
    // 尾字符大的在前面
    // else
    return x.last < y.last;
    // 然而大的字符序号更小
}
signed main()
{
    // #ifdef LOCAL
    // LOCALfo
    // #endif
    freopen("str.in", "r", stdin);
    freopen("str.out", "w", stdout);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        int l = temp.size();
        a[i].last = temp[l - 1] - 'a';
        cnt[temp[l - 1] - 'a']++; // 统计字符
        // 便于O(1)判定错误
        int k;
        cin >> k;
        a[i].s = temp, a[i].x = k;
        a[i].i = i;
    }
    sort(a, a + n, cmp);

    while (m--)
    {
        char t1;
        int t2, num = 0;
        cin >> t1 >> t2;
        int cur = t1 - 'a';
        if (t2 > cnt[cur])
        // 排名越界
        {
            cout << "Orz YYR tql" << endl; // 呵呵呵
            continue;                      // 无解就不要往下了
        }
        for (int i = 0; i < cur; i++)
            num += cnt[i];
        // 找出字符串的位置：即加上前面所有字符串的个数再加上排名
        cout << a[num + t2 - 1].s << endl;
        // 注意这里要 -1，因为下标是从零开始的！
    }
    return 0;
}