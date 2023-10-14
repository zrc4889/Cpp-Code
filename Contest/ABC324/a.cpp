#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n;
    cin >> n;
    cin >> t;
    for (int i = 2; i <= n; ++i)
    {
        int tmp;
        cin >> tmp;
        if (tmp != t) return cout << "No\n", 0;
    }

    cout << "Yes\n";
    return 0;
}