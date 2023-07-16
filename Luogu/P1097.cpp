#include <bits/stdc++.h>
using namespace std;
// map<int, int> a;
// set<int> b;
map<int, int> a;                                  // 统计数字出现次数
priority_queue<int, vector<int>, greater<int>> q; // 自动排序
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        if (!a[x])
            a[x] = 1, q.push(x);
        else
            a[x]++;
    }
    while (!q.empty())
    {
        cout << q.top() << " " << a[q.top()];
        q.pop();
        // if (!q.empty())
        cout << endl;
    }
    return 0;
}