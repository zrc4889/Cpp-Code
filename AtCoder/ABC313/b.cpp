#include <bits/stdc++.h>
using namespace std;

const int _ = 101;

int n, m;
vector<int> e[_];
int ind[_];

int main()
{

    cin >> n >> m;

    for (int i = 1; i <= m; ++i)
    {
        int a, b;
        cin >> a >> b;
        e[a].push_back(b);
        ind[b] ++;
    }
    
    int cnt = 0, x = 114514;
    for (int i = 1; i <= n; ++i)
        if (ind[i] == 0) 
            ++ cnt, x = i;

    if (cnt == 1) cout << x << endl;
    else cout << -1 << endl;
    return 0;
}