#include <bits/stdc++.h>
using namespace std;
char s[2022][80];
int f[2022];
int n, ans;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> s[i];
        f[i] = 1;
        for (int j = i - 1; j >= 1; j--) // 二维化一维
            if (strstr(s[i], s[j]) == s[i]) // 长度自动
            // strstr()返回s[i]第一次出现在s[j]中
                f[i] = max(f[j] + 1, f[i]); // 接上去 or 不接
        ans = max(f[i], ans);
    }
    cout << ans;
    return 0;
}