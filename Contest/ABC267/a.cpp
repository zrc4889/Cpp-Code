#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    string s;
    cin >> s;
    if (s == "Wednesday") return cout << 3, 0;
    else if (s == "Thursday") return cout << 2, 0;
    else if (s == "Monday") return cout << 5, 0;
    else if (s == "Friday") return cout << 1, 0;
    else if (s == "Tuesday") return cout << 4, 0;
    // else if (s == "Sunday") return cout <<  1, 0;
    return 0;
}