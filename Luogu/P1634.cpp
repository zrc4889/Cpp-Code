#include <bits/stdc++.h>
using namespace std;
int x, n;
long long t = 1;
int main()
{
    cin >> x >> n;
    for (int i = 0; i < n; t = t + t * x, i++)
        ;
    cout << t;
    return 0;
}