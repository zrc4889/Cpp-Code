#include <bits/stdc++.h>
using namespace std;
char a[114514], mod[] = "0123456789X";
int sum = 0;
int main()
{
    cin >> a;
    int j = 1;
    for (int i = 0; i < 12; i++)
    {
        // cout << a[i];
        if (a[i] == '-')
            continue;
        sum += (a[i] - '0') * j++;
    }
    // cout << a[0];
    // cout << a[12];
    if (mod[sum % 11] == a[12]) // a[12] 就是识别码
        cout << "Right" << endl;
    else
    {
        a[12] = mod[sum % 11];
        cout << a;
    }
    return 0;
}