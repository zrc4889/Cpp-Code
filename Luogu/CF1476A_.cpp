#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int c = n / k;
        if (n % k != 0)
            c++;
        int sum = k * c;
        if (sum % n == 0)
            cout << sum / n << endl;
        else
            cout << sum / n << endl;
    }
}