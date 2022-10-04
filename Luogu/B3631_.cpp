#include <bits/stdc++.h>
using namespace std;

const int _ = 10010;
int head, idx;
int e[_], ne[_];

void init()
{
    // 初始化函数
    head = -1;
    idx = 0;
}
void add(int k, int x)
{
    k = find(k);
    e[idx] = x;
    ne[idx] = ne[k];
    ne[k] = idx++;
}
void remove(int k)
{
    ne[k] = ne[ne[k]];
}
int find(int val)
{
    for (int i = head; i != -1; i = ne[i])
        if (e[i] == val)
            return i;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    init();
    while (n--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int x;
            int y;
            cin >> x >> y;
            add(x, y);
        }
        else if (op == 2)
        {
            int x;
            cin >> x;
            cout << find(x) << endl;
        }
        else if (op == 3)
        {
            int x;
            cin >> x;
            remove(x);
        }
    }
    return 0;
}