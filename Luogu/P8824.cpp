#include <bits/stdc++.h>
using namespace std;

struct File
{
    int id;
    string name;
};

int cnt = 1;
vector<File> mem;

bool cmp(File a, File b)
{
    return a.id < b.id;
}

void add(string fname)
{
    for (auto obj : mem)
    {
        if (obj.name == fname)
        {
            return;
        }
    }
    // 检查同名文件

    mem.push_back({cnt++, fname});
}

void rm(string rname)
{
    for (auto &obj : mem)
    {
        if (obj.name == rname)
        {
            obj.id = -114514;
        }
    }
}

void ls()
{
    sort(mem.begin(), mem.end(), cmp);

    for (auto obj : mem)
    {
        if (obj.id != -114514)
        {
            cout << obj.name << endl;
        }
    }
}

void arename(string fn, string rn)
{
    for (auto &obj : mem)
    {
        if (obj.name == fn)
        {
            obj.name = rn;
        }
    }
}

int main()
{
    // start here..

    int n;
    cin >> n;

    while (n--)
    {
        string op;
        cin >> op;

        if (op == "touch")
        {
            string fname;
            cin >> fname;

            add(fname);
        }

        if (op == "rm")
        {
            string rname;
            cin >> rname;

            rm(rname);
        }

        if (op == "ls")
        {
            ls();
        }
        if (op == "rename")
        {
            string rn, fn;
            cin >> fn >> rn;

            arename(fn, rn);
        }
    }

    return 0;
}