## 前言

[题目传送门（洛谷）]()

## 思路

我的做法是比较朴素的，应该很容易理解。

先取数列的第一个数字 $cur$, 然后往 $cur$ 后面查找比对相同的数字 $a[i]$ 并统计出现次数记录到 $len$ 数组。

当 $a[i]$ 不等于 $cur$ 时说明当前统计的子序列已经结束。此时更新 $cur$ 的值为 $a[i]$，即以后的序列以 $a[i]$ 为标准比对，切换到下一个 $len$ 数组记录位置。 

## AC Code

``` cpp
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int _ = 100001;
int a[_], len[_];

signed main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int cur = a[1]; // 初始比对值
    int cnt = 1;
    for (int i = 2; i <= n; i++)
    {
        if (a[i] == cur)
            len[cnt]++;             // 相等，累计长度
        else
            cur = a[i], cnt++;      // 不等，重置比对值 cur，cnt 移动到下一个统计位置
    }
    for (int i = 1; i < cnt; i++)
    // 当两段长度不等时；此处不能取到 cnt 是因为 i + 1 有可能超出。
        if (len[i] != len[i + 1])
            return cout << "NO" << endl, 0;

    return cout << "YES" << endl, 0;
    // 可以使用这种方法
}
```