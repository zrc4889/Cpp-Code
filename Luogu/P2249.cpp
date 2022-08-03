#include <bits/stdc++.h>
using namespace std;
const int _ = 1e6 + 10;
int temp;
int n, m;
int a[_], b[_];
int check(int x)
{
    int l = 1, r = n;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (a[mid] >= x)
            r = mid; // 大了就往右
        else
            l = mid + 1; // 小了就往左
    }
    if (a[l] == x)
        return l; // 找到了就输出
    else
        return -1;
}

int main()
{
    // int temp = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        // temp = max(temp, a[i]);
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> temp;           // 输入
        int sum = check(temp); // 二分
        cout << sum << ' ';           // 输出
    }
    return 0;
}