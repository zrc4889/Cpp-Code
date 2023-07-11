#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int n, h[55];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
    }
    int x;
    cin >> x;
    h[n+1] = x;
    sort(h + 1, h + n + 2);
    for (int i = 1; i <= n + 1; i++)    
        if (h[i] == x)
            cout << i << endl;
    // 岛国的题要换行太草了
    return 0;
}