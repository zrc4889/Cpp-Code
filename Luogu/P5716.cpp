#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;

    int year, month;
    cin >> year >> month;
    int f = 0;

    // 判定闰年
    if (year % 400 == 0)
        f = 1; // 2000 世纪闰年！
    if (year % 4 == 0 && year % 100 != 0)
        f = 1;

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        return cout << 31 << endl, 0;
    if (month == 2)
    {
        if (f == 1)
            return cout << 29 << endl, 0;
        else
            return cout << 28 << endl, 0;
    }
    else
        return cout << 30 << endl, 0;
    return 0;
}
