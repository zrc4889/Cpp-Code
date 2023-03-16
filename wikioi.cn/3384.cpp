#include <bits/stdc++.h>
using namespace std;
int n, m, a[114514];
int mem[1001][50][50];

int dfs(int x, int loc, int cnt)
// 第 x 只苹果，在第 loc 只树下，移动了 cnt 步
{
    if (x > n || cnt > m)
        return 0;

    if (mem[x][loc][cnt])
        return mem[x][loc][cnt];

    if (a[x] == loc) // 如果掉下苹果的树刚好在下面

        return mem[x][loc][cnt] = max(dfs(x + 1, 3 - loc, cnt + 1), dfs(x + 1, loc, cnt)) + 1;

    // 接到苹果，马上就走；or 不走

    else // 如果掉下苹果的树不刚好在下面，在另一只树上

        return mem[x][loc][cnt] = max(dfs(x + 1, 3 - loc, cnt + 1), dfs(x + 1, loc, cnt));

    // 1、移动一步，到另一只树下。注意此时不加苹果，因为移动过去时苹果砸烂了。
    // 2、不移动，且没有苹果
}

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cout << max(dfs(1, 1, 0), dfs(1, 2, 1)) << endl;
    // ea
    return 0;
}