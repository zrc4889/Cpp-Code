#include <bits/stdc++.h>
using namespace std;

int p[] = {0, 1, 2, 3, 2, 1, 2, 3, 3, 2, 1};

int main()
{
    // start here..
    // 本题难点在于，存在两种调整方案，并且混合。
    // 所以我们可以对微调的数值次数。

    int a, b;
    cin >> a >> b;

    int n = abs(a - b) / 10;
    // 整十整十地看

    int m = abs(a - b) % 10;
    // 微调

    cout << p[m] + n << endl;
    return 0;
}