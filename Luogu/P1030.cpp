#include <bits/stdc++.h>
using namespace std;
// 实际上就是单纯模拟现实中建树过程
void before(string x, string y)
{
    int lx = x.length();
    int ly = y.length();
    if (lx <= 0)
        return;
    char cur = y[ly - 1];
    cout << cur;
    int k = x.find(cur);
    before(x.substr(0, k), y.substr(0, k));
    before(x.substr(k + 1), y.substr(k, lx - k - 1));
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    string x, y;
    cin >> x >> y;
    before(x, y);
    cout << endl;
    return 0;
}