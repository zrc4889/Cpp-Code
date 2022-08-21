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
    if (n == 0)
        cout << "Today, I ate 0 apple.";
    else if (n == 1)
        cout << "Today, I ate 1 apple.";
    else
        cout << "Today, I ate " << n << " apples.";
    return 0;
}