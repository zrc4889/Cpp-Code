#include <bits/stdc++.h>
using namespace std;
string x;
int flag = 0, ans = 0;
int main()
{
    cin >> x;
    int len = x.size();
    for (int i = 0; i < len; i++)
    {
        if (x[i] == 'S')
            flag++;
        else if (flag != 0 /*出现过S*/ && x[i] == 'T')
            flag--, ans += 2;
    }
    cout << len - ans << endl;
    return 0;
}