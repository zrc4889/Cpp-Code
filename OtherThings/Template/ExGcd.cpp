#include <bits/stdc++.h>
using namespace std;

int x, y;

void ex_gcd(int a, int b)
{
    if (b == 0)
    {
        x = 1, y = 0;
        return;
    }
    ex_gcd(b, a % b);

    int tx = x;
    x = y;
    y = tx - a / b * y;
    // 辗转公式
    // x = y
    // y = x - (a / b) * y;
    return;
}

int main()
{
    int a, b;
    cin >> a >> b;
    ex_gcd(a, b);

    x = (x % b + b) % b;
    cout << x << endl;
    
    return 0; 
}