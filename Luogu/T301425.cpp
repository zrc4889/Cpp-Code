#include <bits/stdc++.h>
using namespace std;

const int _ = 114514;
int a[_];
string str;
int n, m;

bool f(int x)
{
    return str[x - 1] == '1' ? 1 : 0;
}

int main()
{
    // start here..
    cin >> n >> m;
    cin >> str;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    // cout << n << endl;

    int sum = 0;

    for (int i = 0; i < m; i++)
    {
        if (str[a[i]] == '1')
            sum++;
    }

    cout << sum << endl;

    return 0;
}