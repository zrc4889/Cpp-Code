#include <bits/stdc++.h>
using namespace std;
// char a[10001], b[10001];
// 2021年12月18日，没写完20分代码
string a, b;
int sum[10001];
int ans = 0;

int main()
{
    cin >> a >> b;
    int la = a.size();
    int lb = b.size();
    //补齐0
    int maxlen = max(la, lb);
    for (int i = la - 1, j = lb - 1; i >= 0, j >= 0; --i, --j)
    {
        int t1 = a[i] - '0', t2 = b[j] - '0';
        if (t1 < 0)
        {
            t1 = 0;
        }
        if (t2 < 0)
        {
            t2 = 0;
        }
        // cout << t1 << " " << t2 << " ";
        int ans = t1 + t2;
        sum[i+1] = ans;
        // cout << ans << " " << endl;
    }
    cout << endl;
    for (int i = maxlen; i >= 0; --i)
    {
        if (sum[i] >= 10)
        {
            sum[i] %= 10;
            sum[i - 1]++;
        }
    }
    for (int i = 0; i < maxlen; ++i)
    {
        cout << sum[i];
    }
    system("pause");
    return 0;
}