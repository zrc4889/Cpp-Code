#include <bits/stdc++.h>
using namespace std;
string cows[8] = {"Bessie", "Buttercup", "Belinda", "Beatrice",
                  "Bella", "Blue", "Betsy", "Sue"};
int find(string s)
{
    for (int i = 0; i < 9; ++i)
        if (cows[i] == s)
            return i;
}
string x[10], y[10];
int p[10];
int main()
{
    sort(cows, cows + 8);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> x[i] >> _ >> _ >> _ >> _ >> y[i]; // 下划线表示废弃
        int a = find(x[i]), b = find(y[i]);
        p[a]++, p[b]++;
    }
    int cnt = 0;

    for (int i = 0; i <= 7; ++i)
        if (p[i] == 1) //只有一头cow
        {
            q[1] = i; // a[1] 第i头奶牛
            p[i] = -1;
            break;
        }
    for (int i = 2; i <= 8; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            int a = find(x[i]), b = find(y[j]);
            if (a[i - 1] == a && p[b] != -1)
            {
                q[i] = b, p[b] = -1;
                break;
            }
            if (q[i - 1] == b && p[a] != -1)
            {
                q[i] = a, p[a] = -1;
            }
        }
    }
    for (int i = 1; i <= 8; ++i)
        cout << cows[q[i]] << endl;
}