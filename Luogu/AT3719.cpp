#include <bits/stdc++.h>
using namespace std;
const int MAX = 2e5 + 10; // 200000 + 10
int bucket[MAX], a[MAX];
int n, k;
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        // int t;
        cin >> a[i];
        bucket[a[i]]++; // 桶记录
    }
    sort(bucket + 1, bucket + n + 1); // 对出现次数排序
    int ans = 0;
    for (int i = 1; i <= n - k; i++)
    {
        ans += bucket[i]; // 更改超出k的部分
    }
    cout << ans << endl;
    return 0;
}