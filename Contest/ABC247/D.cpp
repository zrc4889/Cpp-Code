#include <bits/stdc++.h>
using namespace std;
queue<int> a;
// 使用 pair 可优化
int main()
{
    int n;
    int op, x, y;
    cin >> n;
    while (n--)
    {
        cin >> op;
        if (op == 1)
        {
            cin >> x >> y;
            while (y--)
            {
                a.push(x);
            }
        }
        else if (op == 2)
        {
            cin >> x;
            int sum = 0;
            while (x--)
            {
                sum += a.front();
                a.pop();
            }
            cout << sum;
        }
    }
    return 0;
}