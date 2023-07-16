#include <bits/stdc++.h>
using namespace std;

struct node
{
    int year;
    string name;
} a[51];
bool cmp(node a, node b)
{
    return a.year < b.year;
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    int y;
    string x;
    cin >> n >> y;
    x = "kogakubu10gokan";
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].year >> a[i].name;
    }
    sort(a + 1, a + 1 + n, cmp);

    // 输入，按年份排序

    // 做此类题目最需要细致

    if (y < a[1].year)
        return cout << x << endl, 0;
    if (a[n].year <= y)
        return cout << a[n].name << endl, 0;

    // 第一次还未修改，输出原始
    // 年份在最后一次之后，输出最后一次

    for (int i = 1; i <= n; i++)
    {
        if (a[i].year > y)
        {

            // 大于了就相当于前面是最后一个能满足的
            cout << a[i - 1].name << endl;
            return 0;
        }
    }
    return 0;
}