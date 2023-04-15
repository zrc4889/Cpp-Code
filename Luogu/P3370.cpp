#include <bits/stdc++.h>
using namespace std;

const int m = 1e9 + 7;

int lucky_hash(string x)
{
    int res = 0;
    for (auto c : x)
    {
        res += (int)c;
    }
    return res % m;
}

int main()
{
    // start here..

    

    return 0;
}