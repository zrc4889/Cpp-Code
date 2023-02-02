#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int main()
{
    // start here..

    string a = "start https://cn.bing.com/search?q=";

    for (int i = 'a'; i <= 'z'; i++)
    {
        Sleep(1);
        a.push_back(i);
        system(a.c_str());
        a.pop_back();
    }
    
    system("taskkill /IM msedge.exe");
    return 0;
}