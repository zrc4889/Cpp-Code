#include <bits/stdc++.h>
using namespace std;
string str[55];
int n, m;int x1 = 500, y1 = 500, x2, y2;
int main()
{
    cin >> n >> m;
    
    //  right_up right_down left_up left_down
    for (int i = 1; i <= n; i++)
    {
        cin>>str[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (str[i][j] == '*')
            {
                x1 = min(x1, i);
                y1 = min(y1, j);
                x2 = max(x2, i);
                y2 = max(y1, j);
                // 实质上就是找最大值和最小值
                // break;
            }
        }
    }
    // cout << endl;
    for (int i = x1; i <= x2; i++)
    {
        for (int j = y1; j <= y2; j++)
        {
            cout << str[i][j];
        }
        cout << endl;
    }

    // system("pause");
    return 0;
}