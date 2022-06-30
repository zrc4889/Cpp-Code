#include <bits/stdc++.h>
using namespace std;
string key;
string temp;
int num = 0;
int t = 1;
int main()
{
    cin >> key;
    while (cin >> temp)
    {
        if (num > 3 && temp != key)
            num++,t*=2;
        if (temp == key)
        {
            cout<<t;
            return 0;
        }
        if (num == 10)
        {
            cout << "Locked" << endl;
            return 0;
        }
    }
    return 0;
}