#include <bits/stdc++.h>
using namespace std;
deque<int> q;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i= 1;i<=n;i++)  cin >> a[i];
    int t, x;
    for (int i= 1;i<=m;i++)
    {
        cin >> t;
        cin >> x;
        // 考虑 3 4
        if (t == 3) 
            q.push_back(x);
        else if (t == 4)
            q.push_back(x);
    }
}