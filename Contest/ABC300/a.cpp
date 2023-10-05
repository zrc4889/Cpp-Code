#include <bits/stdc++.h>
using namespace std;

const int _ = 114514;
int num[_];

int main()
{
    // start here..

    int n, a, b;
    cin >> n >> a >> b;

    int res = a + b;

    for (int i = 1; i <= n; ++i)
    {
        cin >> num[i];
    }

    for (int i = 1; i <= n; ++i)
    {
        if (num[i] == res)
        {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}