#include <bits/stdc++.h>
using namespace std;

const int _ = 1e6 + 10;
int tree[_], idx = 0;

void insert(string x)
{
    int p = 0;
    for (auto c : x)
    {
        int k = getnum(c);
        if (!tree[p][k]) tree[p][k] = ++idx;
        p = tree[p][k];
        cnt[p] ++;
    }
}

int find(string x)
{
    int p = 0;
    for (auto c : x)
    {
        int k = getnum(c);
        if (!tree[p][k]) return 0;
        p = tree[p][k];
    }
    return cnt[p];
}

// 先把模板抄一遍。
// 尽管还是不理解，看看明天早上或者上课的时候有没有办法理解。
// 还是不理解可以问同学问老师啊
// 做题也是一样的