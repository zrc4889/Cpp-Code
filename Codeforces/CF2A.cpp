#include <bits/stdc++.h>
using namespace std;

const int _ = 1001;

int n;
map<string, int> mp1;
map<string, int> mp2;
string name[_];
int score[_];

int main()
{

    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        cin >> name[i] >> score[i];
        mp1[name[i]] += score[i];
        mp2[name[i]] += score[i];   
    }

    int maxx = -1;
    for (int i = 1; i <= n; ++i)
    {
        maxx = max(maxx, mp1[name[i]]);
        mp1[name[i]] = 0;
    }

    string ans;
    for (int i = 1; i <= n; ++i)
    {
        mp1[name[i]] += score[i];
        if (mp1[name[i]] >= maxx && mp2[name[i]] == maxx)
            return cout << name[i] << endl, 0;
    }
    return 0;
}