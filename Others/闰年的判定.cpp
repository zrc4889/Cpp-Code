#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin>>y;
    if ((y%4==0&&y%100!=0)||(y%400==0)) cout<<"Leap year"<<endl;
    else cout<<"Common year"<<endl;
    return 0;
}