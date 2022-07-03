#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;
int a[N], b[N], n, k, cnt;
signed main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= k; ++i)
    {
        cnt = 0;
        // Choose an intger i such that i<= i <= N-K,
        // then swap the values of a[i] and a[i+k]
        for (int j = i; j <= n; j += k) // +k
            b[++cnt] = a[j];
        sort(b + 1, b + cnt + 1); 
        cnt = 0;// the arry are not only 2 numbers.
        for (int j = i; j <= n; j += k)
            a[j] = b[++cnt]; // then restore them
    }
    for (int i = 1; i < n; ++i)
        if (a[i] > a[i + 1]) // if there are two numbers that a[i] > a[i+1], it must be not a ascending order. So print "No"
        {
            cout << "No";
            return 0;
        }
    cout << "Yes";// else print "Yes"
    return 0;
}