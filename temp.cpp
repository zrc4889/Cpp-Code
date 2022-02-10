#include <bits/stdc++.h>
using namespace std;
int n, k;
int c1 = 0;
int a[11][21], c[11][21];
int main()
{
    scanf("%d%d", &k, &n);
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
            c[i][a[i][j]] = j; //第i天第j头奶牛的排名
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int cnt = 0; //内部计数器
            for (int x = 1; x <= k; x++)
            {
                if (c[x][i] > c[x][j])
                {
                    cnt++;
                }
            }
            if (cnt == k) //每一天排名都一致，可以算作是一致的一对
            {
                c1++;
            }
        }
    }
    printf("%d", c1);
    return 0;
}