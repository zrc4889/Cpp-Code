#include <iostream>
using namespace std;
string num;
int main()
{
    cin >> num;
    bool flag = true;
    int temp = 0; //存储真的数字
    for (int i = 0; i < num.size(); ++i)
    {                                    //num.size()取字符串的长度
        temp = temp * 10 + num[i] - '0'; //转换字符为数字
        //处理前导零
        if (flag == false || temp / 13 != 0)
        { //两个条件：第一个是flag为false，即遇到数字，flag等于false
            cout << temp / 13;
            flag = false;
        }
        temp %= 13; //取模
    }
    cout<<endl;
    cout<<temp<<endl;
    return 0;
}