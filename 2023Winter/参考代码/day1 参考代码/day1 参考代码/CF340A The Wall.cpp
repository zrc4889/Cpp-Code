#include<iostream>
using namespace std;
int f(int a ,int b)
{
    int t ,x =a ,y =b;
    if(x <y) {
        t = x;
        x = y;
        y = t;
    }

    while(x % y!=0)
    {
       t = y;
       y = x % y;
       x = t;   
    }
   return a * b /y; 
}
int main() 
{
    int x ,y ,a ,b;
    while(cin>>x>>y>>a>>b)
    {
        int t= f(x ,y);
        int p;
        p =(a %t==0)? b/t-a/t+1 : b/t-a/t;

        cout <<p <<endl;
    }

    return 0;
}