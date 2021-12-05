#include <bits/stdc++.h>
using namespace std;
string s;
char a[10001], temp[100015];
void check(string);
void string_to_char(string, char);
void charl(int, int);
void check(string temp)
{
    //字典库
    if (temp == "hello")
    {
        cout << "你好";
    }
}
// void charl(int pre, int tail)
// {
//     cout<<pre<<" "<<tail;
//     string temp;
//     for (int i = pre; i < tail; i++)
//     {
//         temp[i - pre] = a[i];
//     }
//     cout << temp;
//     check(temp);
// }

void string_to_char(string t1, char t2[])
{
    for (int i = 0; i < t1.length(); i++)
    {
        t2[i] = t1[i];
    }
}
int main()
{
    getline(cin, s);
    int size = s.size();
    string_to_char(s, a);
    // cout << a;
    //2021年12月5日15点06分字符转换模块完成
    int pre = 0, tail = 0; //前驱，后继
    for (int i = 0; i < size + 1; i++)
    {
        if (a[i] == '\0' || a[i] == ' ')
        {
            cout << temp << endl;
            memset(temp, 0, sizeof(temp));
            //2021年12月5日15点08分判断末尾与空格模块完成
            //定位后继
            // tail = i;
            //切割并判断字符串
        }
        else
        {
            temp[i] = a[i];
            cout<<temp[i]<<" ";
        }
    }

    system("pause");
    return 0;
}