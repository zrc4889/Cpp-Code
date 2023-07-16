#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    cin >> n;
    if (n <= 26)
        for (int i = 0; i < n; i++)
            cout << char(i + 'a');
    
    return 0;
}