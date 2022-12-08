#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    char a;
    int n, m;
    cin >> n >> m;
    int l = n * m;
    int sum = 0;
    while (l--)
    {
        cin >> a;
        if (a == '#')
            sum++;
    }
    cout << sum << endl;
    return 0;
}