#include <bits/stdc++.h>
using namespace std;

int n;
bool isprime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    // start here..

    int T;

    cin >> T;
    while (cin >> n)

    {
        int check = isprime(n);
        if (check)
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }

    return 0;
}