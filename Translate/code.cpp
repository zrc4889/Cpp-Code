#include <bits/stdc++.h>
#include <stdio.h>
#include <map>
#include <fstream>
#include <windows.h>
using namespace std;

ofstream ot;
ifstream in;

map<string, string> tsl;
int main()

{
    in.open("translate.trf");
    ot.open("tsl.trf");
    int n;
    string t1, t2;
    in >> n;
    for (int i = 0; i < n; i++)
    {
        in >> t1 >> t2;
        tsl[t1] = t2;
    }
    // fclose(stdin);
    // freopen("a.trf","r",stdin);
    in.close();
    in.open("a.trf");
    int v;
    in >> v;
    for (int i = 0; i < v; i++)
    {
        string t3;
        in >> t3;
        ot << tsl[t3] << " ";
    }
    system("pause");
    return 0;
}
