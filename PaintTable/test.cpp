#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
map<string, int> mp;
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int c = 0;
    freopen("a.csv", "r", stdin);
    freopen("out.csv", "w", stdout);

    string str;
    int f = 0;
    while (getline(cin, str))
    {
        if (f++ == 0)
            continue;

        int n = str.size();

        string res;
        for (int i = n - 2; i >= 0; i--)
        {
            if (str[i] == '\"')
                break;
            res = str[i] + res;
        }

        string tmp;
        int cnt = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (str[i] == '\"')
                cnt++;
            if (cnt == 3)
                tmp = str[i] + tmp;
            else if (cnt == 4)
                break;
        }

        tmp.pop_back();

        // cout << c << endl;
        // if (str.find("洛谷") == 1)
        // cout << 1 << endl;

        int h, m, s;
        sscanf(tmp.c_str(), "%d:%d:%d", &h, &m, &s);
        s += h * 3600;
        s += m * 60;

        if (str.find("洛谷") != string::npos)
        {
            mp["洛谷"] += s;
            continue;
        }

        mp[res] += s;
    }

    cout << "Program, "
         << "Time(sec)" << endl;

    for (auto cur = mp.begin(); cur != mp.end(); ++cur)
    {
        string t = cur->first;
        if (t == "哔哩哔哩")
            t = "Bilibili";
        if (t == "腾讯QQ")
            t = "QQ";
        if (t == "洛谷")
            t = "Luogu";
        if (t == "Luogu" || t == "DingTalk" || t == "Microsoft Edge" || t == "Bilibili" || t == "QQ" || t == "Minecraft")
            cout << t << ", " << cur->second << "sec" << endl;
    }
    // cout << c << endl;

    return 0;
}