#include <bits/stdc++.h>
using namespace std;
set<string> st;
string s;
int t, n, mx, id;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> s >> t;
        if (st.find(s) != st.end())
            continue; // 排除重复
        st.insert(s);
        if (t > mx)         // 大于最大值
            mx = t, id = i; // 刷新最大值并且将最大值项的id更新
    }
    cout << id << endl; // 输出id
    return 0;
}