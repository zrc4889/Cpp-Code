#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cost, money, mom;
    for (int i = 1; i <= 12; ++i)
    {
        cin >> cost;
        money -= cost - 300;
        if (money < 0)
        {
            // 钱不够
            cout << -i;
            return 0;
        }
        else
            mom += money / 100, money %= 100;
    }
    cout << 120 * mom + money;
}