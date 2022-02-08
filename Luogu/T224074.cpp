#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[5000], b[5000], g[5000];
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; ++i)
    {

        cin >> a[i] >> b[i];
        if (a[i] > b[i])
            swap(a[i], b[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        
        for (int k = 1; k <= 4; ++k)
        {
            g[i] = k;bool flag = true;
            for (int j = 1; j <= m; ++j)
            if (b[j]==i&&g[a[j]] == k)
            {
                flag = false;
                break;
            }
            if (flag){
                cout<<g[i];
                break;
            }
        }
    }
    cout<<endl;
    return 0;
}