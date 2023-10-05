#include <bits/stdc++.h>
using namespace std;

const int _ = 2e5 + 10;

struct Sleep{
    int start;
    int end;
} a[_];

int cnt = 0;

int main()
{
    // start here..

    int n;
    cin >> n;

    for (int i = 1; i <= (n - 1) / 2; ++i)
        cin >> a[++cnt].start >> a[cnt].end;

    

    return 0;
}