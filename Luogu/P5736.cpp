#include <bits/stdc++.h>
using namespace std;
const int _ = 114514;
int a[_];
bool is_prime(int k)
{
    for (int i = 2; i <= sqrt(k); i++)
    {
        if (k % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    /*XYC YYDS*/
    /*cookiebus YYDS
    /*nullptr YYDS*/
    /*tree_one_ YYDS*/
    /*PinkRabbit YYDS*/
    /*Eternity YYDS*/
    /*yuxinhao YYDS*/
    /*_ YYDS*/
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        int cur = is_prime(a[i]);
        if (a[i] == 1) continue;
        if (cur)
            cout << a[i] << ' ';
        else
            continue;
    }
    return 0;
}