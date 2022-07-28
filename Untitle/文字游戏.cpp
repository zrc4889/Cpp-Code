#include <bits/stdc++.h>
using namespace std;
stack<int> st;
char s[55] = " ";
char a[55] = " ";
int main()
{
    cin.getline(s, 55);
    int len = strlen(s);
    // 优化必须压序号
    // 输入必须当下标
    for (int i = 0; i < len; ++i)
    {
        if (s[i] == '(')
        {
            st.push(i); // 压序号
            a[i] = ' ';
        }
        else if (s[i] == ')')
        {
            if (!st.empty())
            {
                st.pop();
                a[i] = ' '; // 配对上了
            }
            else
            {
                a[i] = '#';
            }
        }
        else
        {
            a[i] = ' '; // 字母
        }
    }
    int k;
    while (!st.empty())
    {
        k = st.top();

        a[k] = '@';
        st.pop();
    }
    // cout << s << endl;
    // cout << a;
    int fuck = strlen(a);
    for (int i= 0;i<fuck;i++)
    {
        if (a[i] == '@' || a[i] == '#')
        return cout << "NO", 0;
    }
    cout << "YES";
    return 0;
}
