#include <bits/stdc++.h>
using namespace std;
int a[100001], p[100001];
int n;
void dfs(int x)
{
    if (x == n + 1)
    {
        for (int i = 1; i <= n; ++i)
            printf("    %d", a[i]);
        cout << endl;
        return;
    }
    for (int i = 1; i <= n; ++i)
    {
        if (p[i] == 1)
            continue; // 标记过的，排除
        a[x] = i;     // 妙用下标为值
        p[i] = 1;     // 完成前，添加标记，防止重复
        dfs(x + 1);
        p[i] = 0; // 完成后，解除标记
    }
}
int main()
{
    cin >> n;
    dfs(1);
    // system("pause");
    return 0;
}