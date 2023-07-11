#include <bits/stdc++.h>
#define int long long
using namespace std;

const int _ = 5001;
int tmp[_], ans[_];
int dm, flag;

int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}

void dfs(int x, int a, int b, int las)
{
    if (a < 0 || b < 0)
        return;

    if (x == dm)
    {
        if (a != 1 || b <= tmp[x - 1])
            return;

        tmp[x] = b;

        flag = 1;
        if (ans[x] == 0 || ans[x] > tmp[x])
            for (int i = 1; i <= dm; ++i)
                ans[i] = tmp[i];
        return;
    }

    // 1 / i * (dm - x + 1) >= a / b
    // i <= b * (dm - x + 1) / a  上界
    
    // 1/i < a/b
    // i > b / a
    // i > las + 1
    for (int i = max(las + 1, b / a); i <= b * (dm - x + 1) / a; ++i)
    {
        // x i 1/i
        // 1/i > a/b
        if (i * a < b)
            continue;   

        tmp[x] = i; // 分母放 i

        // a/b - 1/i = A/B
        int A = a * i - b;
        int B = i * b;

        int g = gcd(A, B);
        A /= g, B /= g;

        dfs(x + 1, A, B, i);
    }
}

signed main()
{
    int a, b;

    cin >> a >> b;

    flag = false;

    for (dm = 1; ; dm++)
    {
        memset(tmp, 0, sizeof tmp);

        dfs(1, a, b, b / a);

        if (flag)
            break;
    }

    for (int i = 1; i <= dm; ++i)
        cout << ans[i] << ' ';

    return 0;
}