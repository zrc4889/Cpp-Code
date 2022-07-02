#include <bits/stdc++.h>
using namespace std;
int ans = 0;
void is(int x)
{
    for (int i = 1; i <= x / 2; i++)
    {
        if (i * i == x)
        {   
            
            ans++;
            break;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            if (i == j)
            {
                // cout << i << " " << j << endl;
                ans++;
                continue;
            }

            is(i * j);
        }
    }
    cout << ans;
    return 0;
}