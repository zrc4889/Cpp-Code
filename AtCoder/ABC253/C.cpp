#include <bits/stdc++.h>
using namespace std;
// ABC 253 C题

// 插入 1 x 表示插入数值x
// 删除 2 x m 表示删除m个数值x（若不够则取最小的）
// 打印 3

int n; // 操作次数
int s[99999999];
int lena()
{
    // 3
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (s[i] != -1)
        {
            sum++;
        }
    }
    return sum;
}
void did()
{
    int len = lena();
    int maxn = 0, minn = 9999999;
    for (int i = 1; i <= len; i++)
    {
        cout<<s[i]<<" ";
        maxn = max(maxn, s[i]);
        minn = min(minn, s[i]);
    }
    cout << maxn - minn << endl;
}
void insert(int x)
{
    int l = sizeof(s) / sizeof(int);
    s[l] = x;
    return;
}
int find_x(int x)
{
    int l = sizeof(s) / sizeof(int);
    int cnt = 0;
    for (int i = 1; i <= l; i++)
    {
        if (s[i] == x)
        {
            cnt++;
            // 顺便标记-1
            s[i] = -1;
        }
    }
    return cnt;
    // 统计有多少个x
}
void dltarr(int arr)
{
    int l = sizeof(s) / sizeof(int);
    for (int i = arr; i <= l; i++)
    {
        swap(s[i], s[i + 1]); // 一位一位把-1丢到后面去
    }
    return;
}
void deleted(int x, int m)
{
    int l = sizeof(s) / sizeof(int);
    int cnt = find_x(x);
    // 比较m与cnt
    m = min(m, cnt);
    // 位移
    for (int i = 1; i <= l; i++)
    {
        if (s[i] == -1)
        {
            dltarr(i);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int temp;
        cin >> temp;
        cout << "temp = " << temp << endl;
        if (temp == 1)
        {
            int x;
            cin >> x;
            insert(x);
        }
        if (temp == 2)
        {
            int x;
            cin >> x;
            int m;
            cin >> m;
            deleted(x, m);
        }
        if (temp == 3)
        {
            // print();
            did();
        }
    }
    return 0;
}