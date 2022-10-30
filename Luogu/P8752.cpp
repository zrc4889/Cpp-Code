#include <bits/stdc++.h>
using namespace std;
bool check(int x)
{
    int qian = x / 1000 % 10;
    int bai = x / 100 % 10;
    int shi = x / 10 % 10;
    int ge = x % 10;
    return (qian == shi) && (bai + 1 == ge);
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n = 5;
    int ans = 0;
    while (n--)
    {
        int tmp;
        cin >> tmp;
        if (check(tmp)) ans++;
    }
    cout << ans << endl;
    return 0;
}