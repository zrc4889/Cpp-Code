#include <bits/stdc++.h>
using namespace std;

const int _ = 1e6 + 10;

int a[_];
deque<int> q;

int main()
{
    // start here..

    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; ++i)
        scanf("%d", &a[i]);

    // [i - k + 1, i]

    for (int i = 1; i <= n; ++i)
    {
        while (!q.empty() && a[q.back()] >= a[i]) // 单调递增的序列，查找小
            q.pop_back();

        q.push_back(i); // 下标

        while (!q.empty() && q.front() < i - k + 1)
            q.pop_front(); // 窗口飞出去了

        if (i >= k)
            printf("%d ", a[q.front()]);
    }

    printf("\n");
    q.clear();

    for (int i = 1; i <= n; ++i)
    {
        while (!q.empty() && a[q.back()] <= a[i])
            q.pop_back();
            
        q.push_back(i);

        while (!q.empty() && q.front() < i - k + 1)
            q.pop_front();

        if (i >= k)
            printf("%d ", a[q.front()]);
    }

    return 0;
}