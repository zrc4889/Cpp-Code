#include <bits/stdc++.h>
using namespace std;

const int _ = 100;

int a[_], vis[_];
int n, l, r;
int ans = 0;

void dfs(int id, int sum)
{
    if (id == n + 1)
    {
        if (l <= sum && sum <= r)
            ans++;
        return;
    }

    int tmp = sum;
    for (int i = id; i <= n; ++i)
        tmp += a[i];

    if (sum > r) 
        return;
    if (tmp < l)
        return;

    dfs(id + 1, sum + a[id]);
    dfs(id + 1, sum);
}

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{

    cin >> n >> l >> r;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    sort(a + 1, a + n + 1, cmp);
    dfs(1, 0);

    cout << ans << endl;

    return 0;
}