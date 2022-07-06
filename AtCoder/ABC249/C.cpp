#include <bits/stdc++.h>
using namespace std;
int p[50]; // 桶思想
int n, k, ans = 0;
string s[20]; // n小优先考虑dfs
void dfs(int x)
{
    // x 代表深度，也代表字符串顺序
    if (x > n) // 超过n了
    {
         int temp = 0;
         for (int i = 0; i < 26; ++i) if (p[i] == k) temp++; // 桶思想
        // 看看二十六个字母里面的计数
        ans = max(ans, temp); 
        return; // 记得 return 不然 RE 抱回家
        // Find the maximum number of distinct alphabets
    }
    dfs(x + 1); // 不加的情况
    
    for (auto c : s[x]) p[c-'a'] ++;
    
    dfs(x + 1); // 加之后的情况
    
    for (auto c : s[x]) p[c-'a'] --; // 还原
}
int main()
{
    cin >> n >> k;
    for (int i = 1;i <= n; ++i) cin >> s[i];
    dfs(1);
    cout << ans;
    return 0;
}