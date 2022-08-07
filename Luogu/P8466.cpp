#include <bits/stdc++.h>
using namespace std;
string p;
map<char, int> cnt;
int main()
{
    #ifdef LOCAL
        LOCALfo
    #endif
    int T;
    cin >> T;
    cnt.clear();
    while (T--)
    {
        cnt.clear();
        cin >> p;

        int l = p.size();
        for (int i = 0; i < l; i++)
        {
            cnt[p[i]]++;
        }
        if (cnt['D'] == 1 && cnt['X'] == 1)
            cout << "Yes" << endl;
        else if (cnt['A'] == 4 || cnt['2'] == 4 || cnt['K'] == 4 || cnt['Q'] == 4 || cnt['J'] == 4 || cnt['T'] == 4 || cnt['9'] == 4 || cnt['8'] == 4 || cnt['7'] == 4 || cnt['6'] == 4 || cnt['5'] == 4 || cnt['4'] == 4 || cnt['3'] == 4)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}