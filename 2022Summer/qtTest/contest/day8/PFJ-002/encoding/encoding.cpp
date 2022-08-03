#include <bits/stdc++.h>
using namespace std;
// int a[114514];
char a[10];
// 递归
// 长度为 1 return 结束
// 长度为 2 交换二数
// 否则 f(l, mid) f(mid + 1, r)
bool cmp1(char x, char y)
{
    return x > y;
}
bool cmp2(char x, char y)
{
    return x < y;
}

void f(int l, int r, int flag)
{
    if (l == r)
        return;
    // else if (l + 1 == r)
    // {
    //     swap(a[l], a[r]);
    // }
    else
    {
        int mid = l + (r - l) / 2;
        if (flag == 1)
            sort(a + l, a + mid, cmp1);
        else
            sort(a + l, a + mid, cmp2);
        f(l, mid, -flag);
        if (flag == 1)
            sort(a + mid + 1, a + r, cmp1);
        else
            sort(a + mid + 1, a + r, cmp2);
        f(mid + 1, r, -flag);
    }
}
int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        a[i] = i + '0';
    f(1, n, -1);
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    return 0;
}