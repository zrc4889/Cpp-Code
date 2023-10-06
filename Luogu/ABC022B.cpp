#include <bits/stdc++.h>
using namespace std;
map<int, int> vec;

int main()
{

    int n;
    cin >> n;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        int c;
        cin >> c;
        if (vec[c] == 1)
            sum++;
        else
            vec[c] = 1;
    }

    cout << sum << endl;

    return 0;
}