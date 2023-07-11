#include <bits/stdc++.h>
using namespace std;
string a, b;
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    getline(cin, a), getline(cin, b);
    for (int i = 0; i < a.length(); ++i)
        a[i] = tolower(a[i]);
    for (int i = 0; i < b.length(); ++i)
        b[i] = tolower(b[i]);
    // a = ' ' + a + ' ', b = ' ' + b + ' ';
    // 统一首位空格格式
    if (b.find(a) == string
        :: npos)
        return cout << -1 << endl, 0;
    else
    {
        int t1 = b.find(a); // 第一次出现的位置
        int t2 = b.find(a);
        int s = 0;
        while (t2 != string :: npos)
            t2 = b.find(a, t2 + 1), s++;
        cout << s << ' ' << t1;
    }
    // return 0;
    return 0;
}