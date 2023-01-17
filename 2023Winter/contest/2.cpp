#include <bits/stdc++.h>
using namespace std;

bool isp[1000001];
int pr[114514];

int cnt = 0;
int n;

void fac(int n)
{

    for (int i = 2; i <= n; i++)
        isp[i] = 1;
    isp[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        if (isp[i])
            pr[++cnt] = i;
        for (int j = 1; j <= cnt && i * pr[j] <= n; j++)
        {
            isp[i * pr[j]] = 0;
            if (!(i % pr[j]))
                break;
        }
    }
}

int main()
{
    // start here..
    cin >> n;
    fac(n);
    cout << (isp[n] == true ? "Yes" : "No") << endl;

    return 0;
}