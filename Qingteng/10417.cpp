#include <bits/stdc++.h>
using namespace std;
string t1, t2;
int a[5], b[5];
int main()
{
    cin >> t1 >> t2;
    for (int i = 1; i <= 4; i++)
    {
        a[i] = t1[i] + '0';
        b[i] = t2[i] + '0';
    }
    // 排序前记录
    int a1 = 0, a2 = 0;
    for (int i = 1; i <= 4; i++)
    {
        if (a[i] == b[i])
        {
            a1++;
        }
    }
    sort(a + 1, a + 1 + 4);
    sort(b + 1, b + 1 + 4);
    for (int i = 1; i <= 4; i++)
    {
        if (a[i] == b[i])
        {
            a2++;
        }
    }
    a2 = a2 - a1;
    cout << a1 << endl
         << a2;
    return 0;
}