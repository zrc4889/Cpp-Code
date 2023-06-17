#include <bits/stdc++.h>
using namespace std;

const int _ = 7;
int a[_];
int n, k;
int ans = 0;

void dfs(int value, int id)
{
    if (id < 0)
        return;
    if (id == 0 && value == 0)
    {
        int sum = 0;
        for (int i = 1; i <= k; ++i)
        {
            if (a[i] < a[i - 1] && i > 1) return;
            sum += a[i];
        }
        if (sum == n)
        {
            ans++;
            return;
        }
    }

    for (int i = 1; i <= value; i++)
    {
        a[id] = i;
        dfs(value - i, id - 1);
        a[id] = 0;
    }
}

int main()
{
    // start here..

    cin >> n >> k;

    dfs(n, k);

    cout << ans << endl;

    return 0;
}