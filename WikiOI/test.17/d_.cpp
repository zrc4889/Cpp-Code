#include <bits/stdc++.h>
using namespace std;

const int _ = 114514;

// 并查集 N方 炸飞啦啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊！！！！！！！！！！！！！！！！
int a[_], fa[_];

int __find(int x)
{
    return fa[x] == x ? x : fa[x] = __find(fa[x]);
}

void __union(int x, int y)
{
    // y 是 x 的父亲
    fa[__find(x)] = __find(y);
}

int main()
{
    // start here..

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i < _; i++)
    {
        fa[i] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[j] > a[i])
            {
                __union(a[i], a[j]);
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << __find(a[i]) << endl;
    }

    return 0;
}