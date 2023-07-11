#include <bits/stdc++.h>
using namespace std;

const int _ = 1e3 + 10;

// 点离散（二维离散化），二维前缀和。

struct Node
{
    int data, id;
};
Node rx[_], ry[_];
int x[_], y[_];
int sum[_][_];
int n;
int ans = INT_MAX;

bool cmp(Node x, Node y)
{
    return x.data < y.data;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> rx[i].data >> ry[i].data;
        rx[i].id = i, ry[i].id = i;
    }

    sort(rx + 1, rx + n + 1, cmp);
    sort(ry + 1, ry + n + 1, cmp);

    for (int i = 1; i <= n; ++i)
        x[rx[i].id] = i, y[ry[i].id] = i;

    for (int i = 1; i <= n; ++i)
        sum[x[i]][y[i]]++; // 表示这里有个点
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            sum[i][j] += sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1]; // 注意前缀和
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j) // 枚举交点坐标
            ans = min(ans, max(sum[i][j], max(sum[i][n] - sum[i][j], max(sum[n][j] - sum[i][j], sum[n][n] - sum[i][n] - sum[n][j] + sum[i][j]))));

    cout << ans << endl;
    return 0;
}

/*
离散化，一般通过结构体记录原有的数据以及数据编号，
然后按照数据大小排序，在过程中，编号会跟随结构体排序。
完成后，排序后的结构体组按序输出数据编号即完成离散化。
离散化保持了数据原有的全/偏序关系。线性离散化如此。
那么二维平面离散化就需要分别记录每个点的横纵坐标，
按横纵坐标做两次离散化，
再将离散化完后的横纵坐标记录为新的点。
*/

/*
第二象限 sum[i][j]
第一象限 sum[i][n] - sum[i][j]
第三象限 sum[n][j] - sum[i][j]
第四象限 sum[n][n] - sum[i][n] - sum[n][j] + sum[i][j]
*/