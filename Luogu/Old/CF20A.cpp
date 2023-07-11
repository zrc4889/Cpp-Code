#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    cin >> s;
    int l = s.size();
    while (s[l - 1] == '/' && l >= 1)
        l--; // 巧用l与字符串下标达成关系
    if (l == 0)
        cout << "/" << endl; // 全都是斜杠
    if (l == 1)
        cout << s[0] << endl; // 只有一个字符时（可删？）
    int flag = 0;
    for (int i = 0; i < l; ++i)
    {
        // 正在一组斜杠中，遇到非斜杠，输出非斜杠字符，结束此组斜杠
        // 正在一组斜杠中，遇到斜杠，不输出斜杠
        // 不在一组斜杠中，遇到非斜杠，常规输出
        // 不在一组斜杠中，遇到斜杠，输出斜杠字符，开始词组斜杠

        if (flag == 1){
            if (s[i] == '/') continue;
            if (s[i] != '/') cout<<s[i],flag=0;
        }else if (flag == 0){
            if (s[i] == '/') cout<<s[i],flag=1;
            if (s[i] != '/') cout<<s[i];
        }
    }
    system("pause");
    return 0;
}