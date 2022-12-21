#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    string a;
    string b;
    // cin >> a >> b;
    getline(cin, a);
    getline(cin, b);

    if (a.find("啊啊啊啊") != string::npos)
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}