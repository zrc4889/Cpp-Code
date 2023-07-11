#include <bits/stdc++.h>
using namespace std;

int n;
void f(int n, string m)
{
    if (n == 0)
    {
        cout << m << endl;
        return;
    }
    f(n - 1, m + "a");
    f(n - 1, m + "b");
    f(n - 1, m + "c");
    // 没看题了是吧
}

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n;
    f(n, "");
    return 0;
}