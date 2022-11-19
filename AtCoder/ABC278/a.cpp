#include <bits/stdc++.h>
using namespace std;

int a[114514]; // 下北眵

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n, k;
    cin >> n >> k;
    for (int i=0;i<n;i++) cin >> a[i];
    for (int i=k;i<n+k;i++) cout << a[i] << ' ';
    return 0;
}