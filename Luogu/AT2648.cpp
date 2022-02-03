#include <bits/stdc++.h>
#include <queue>
#include <deque>
#include <algorithm>
using namespace std;
int n, a[200010];
deque<int> q;
bool b = false;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (b == true)
            q.push_front(a[i]);
        else if (b == false)
            q.push_back(a[i]);
        b = !b;
    }
    if (n % 2 == 0)
    {
        while (!q.empty())
        {
            cout << q.front() << " ";
            q.pop_front();
        }
    }
    else
    {
        while (!q.empty())
        {
            cout << q.back() << " ";
            q.pop_back();
        }
    }
    system("pause");
    return 0;
}