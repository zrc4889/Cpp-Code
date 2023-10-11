#include <bits/stdc++.h>
using namespace std;
int tree[20005][2];
void head(int n)
{
    // 根 左 右
    cout << n << " ";
    if (tree[n][0] != 0)
        head(tree[n][0]); // 当孩子有的时候就递归树
    if (tree[n][1] != 0)
        head(tree[n][1]);
}
void mid(int n)
{
    if (tree[n][0] != 0)
        mid(tree[n][0]);
    cout << n << " ";
    if (tree[n][1] != 0)
        mid(tree[n][1]);
}
void tail(int n)
{
    if (tree[n][0] != 0)
        tail(tree[n][0]);
    if (tree[n][1] != 0)
        tail(tree[n][1]);
    cout << n << " ";
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> tree[i][0] >> tree[i][1];
    head(1);
    cout << endl;
    mid(1);
    cout << endl;
    tail(1);
    // system("pause");
    return 0;
}