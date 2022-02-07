#include <bits/stdc++.h>
using namespace std;
string s;
int i;
int main()
{
    cin >> S;
    i = s.size(); // size 取字符串长度
    // 函数 substr(n,m)取某字串的子串（n到m）
    if (s.substr(i - 5, i) == "dream" || s.substr(i - 5,i) == "earse" || s.substr(i - 6, i) == "eraser" || s.substr(i - 7, i) == "dreamer")
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
    return 0;
}