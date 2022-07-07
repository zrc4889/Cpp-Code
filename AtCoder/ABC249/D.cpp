#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
long long cnt[N + 10], ans;
int n;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        cnt[x]++; // 妙啊
    }
    for (int i = 1; i <= N; ++i)
        // 下标作元素值
        // i*j 
        for (int j = 1; j <= N / i; ++j)
            ans += cnt[i] * cnt[j] * cnt[i * j]; // 排列组合？
            // i出现的次数 × j出现的次数 × i*j出现的次数
    
    cout << ans;
    return 0;
}