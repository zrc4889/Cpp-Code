#include <bits/stdc++.h>
using namespace std;
const int _ = 2e5 + 1;
// file_name : C_fuck.cpp
// date: 2022年7月20日
struct Node
{
    int val;
    // int id;
    int to; // 下个房间
    bool vis = false;
} a[_];
// int last;
void go(int i, int coin)
{
    //	int coin;
    if (a[i].vis == 1)
    { // 回来了
        cout << coin << endl;
        return;
        //		return coin; // 直接返回金币
    }
    a[i].vis = 1;
    go(a[i].to, coin + a[i].val);
    a[i].vis = 0;
    //	coin += ; .w
    // 先加上权值
    //	return coin;
}
int main()
{
    freopen("escape.in", "r", stdin);
    freopen("escape.out", "w", stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].val;
        // a[i].id = i;
        //		a[i].to;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].to;
    }
    // 输入完成！！！！
    for (int i = 1; i <= n; i++)
    {
        // 每一个点
        //		last = i;
        //		cout << last << endl;
        go(i, 0);
    }
    return 0;
}