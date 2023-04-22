#include <bits/stdc++.h>
using namespace std;
const int mod = 114514; // tree
const int _ = mod + 10;
string g[mod + 10];

int ha(string t)
{
    int res = 0;
    for (auto c : t)
    {
        res = (c + res * 31 % mod) % mod;
    }
    return res;
}

bool find(string t)
{
    int c = ha(t);

    while (g[c] != "" && g[c] != t)
        c = c + 1 % mod;
    return g[c] == t;
}

void add(string t)
{
    if (find(t))
        return;

    int c = ha(t);
    while (g[c] != "")
        c = c + 1 % mod;
    g[c] = t;
    // there is no space to place it :(
}

int main()
{
    // start here..
    int n;
    cin >> n;
    while (n--)
    {
        string op;
        cin >> op;
        if (op == "add")
        {
            string t;
            // cin >> t;
            getline(cin, t);
            add(t);
        }
        else
        {
            string t;
            getline(cin, t);
            if (find(t))
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
    }
    return 0;
}