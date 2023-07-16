#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
    // 这道题只要筛选出不是素数的就行了，注意1235特判
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "Not Prime" << endl;
        return 0;
    }
    if (n == 2 || n == 3 || n == 5)
    {
        cout << "Prime" << endl;
        return 0;
    }
    if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }
    // system("pause");
    return 0;
}