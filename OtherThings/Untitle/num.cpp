#include <bits/stdc++.h>
using namespace std;

bool is_prime(int x)
{
    if (x == 1)
        return false;
    for (int i = 2; i * i <= x; ++i)
        if (x % i == 0)
            return false;
    return true;
}
int main()
{
    // start here..

    // 第一个

    srand((unsigned)time(NULL));

    cout << 5 << endl;
    for (int i = 1; i <= 5; ++i)
    {
        int t = rand() % 50 + 1;
        if (is_prime(t) && t >= 30)
            cout << t << endl;
        else
        {
            --i;
            continue;
        }
    }

    return 0;
}