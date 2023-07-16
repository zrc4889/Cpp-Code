#include <bits/stdc++.h>
using namespace std;
bool is_prime(int x)
{
    for (int i = 2; i * i<= x; i++)
        if (x % i == 0)
            return false;
    return true;
}
void output(int a)
{
    if (a == 4)
    {
        cout << "4=2+2" << endl;
        return;
    }
    for (int i = 3; i + 2 <= a; i += 2)
    {
        if (is_prime(i) && 2 + i == a)
        {
            cout << a << "=2+" << i;
            return;
        }
    }
    for (int i = 3; i + 3 <= a; i += 2)
    {
        if (is_prime(i) && is_prime(a - i))
        {
            cout << a << "=" << min(i, a - i) << "+" << max(i, a - i) << endl;
            return;
        }
    }
}
int main()
{
    #ifdef LOCAL
        LOCALfo
    #endif
    int n;
    cin >> n;
    for (int i = 4; i <= n; i += 2)
        output(i);
    return 0;
}