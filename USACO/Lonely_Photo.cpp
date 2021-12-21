#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int main()
{
    cin >> n;
    int ans = 0;
    cin >> s;
    for (int i = 1; i < n - 1; i++)
    {
        char tmp;
        tmp = s[i];
        if (s[i - 1] != tmp || s[i + 1] != tmp)

        {
            ans++;
        }
    }
    cout << ans;
    /*记得把system去掉，不然被骂！！！！！！！！！！！！！！！！！*/
    // system("pause");
    return 0;
}
