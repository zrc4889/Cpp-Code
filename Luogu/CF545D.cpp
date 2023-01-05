#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, greater<int>> q;

int main()
{
    // start here..
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        q.push(t);
    }
    int sum = 0;
    int ans = 0;
    for (int i = 1; i <= n; i++, q.pop())
    {
        if (sum <= q.top())
            ans++, sum += q.top();
    }
    cout << ans << endl;
    return 0;
}