#include <bits/stdc++.h>
using namespace std;

string s;
map<char, int> a;

int main()
{
    // start here..
    int ans = 0;
    int n;
    cin >> n >> s;
    for (int i = 0; i != '\0'; i++)
    {
        char cur = s[i];
        if ('a' <= cur && cur <= 'z')
            a[cur]++;
        if ('A' <= cur && cur <= 'Z')

        {
            if (a[cur])
                a[cur]--;
            else
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}