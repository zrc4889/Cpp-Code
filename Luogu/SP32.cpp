#include <bits/stdc++.h>
using namespace std;

int main()
{
    // start here..
    string a, b;
    int op;
    while (cin >> op >> a >> b)
    {
        int len = b.size();
        for (int i = 0; i < len; i++)
        {
            string::size_type pos = b.find(a, i);
            if (pos != b.npos)
            {
                cout << pos << endl;
                i = pos + 1;
            }
            else
            {
                cout << endl;
                break;
            }
        }
    }

    return 0;
}