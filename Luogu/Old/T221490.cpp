#include <bits/stdc++.h>
using namespace std;
char a[4][4];
int work1()
{
    int ans = 0;
    for (char c = 'A'; c <= 'Z'; ++c)
    {
        // 字符也可以循环
        int p = 0;
        for (int i = 1; i <= 3; ++i)
        {
            if (a[i][1] == a[i][2] && a[i][2] == a[i][3] && a[i][3] == a[i][1])
            {
                p++;
            } // 行
        }
        for (int i = 1; i <= 3; ++i)
        {
            if (a[1][i] == a[2][i] && a[2][i] == a[3][i] && a[3][i] == a[1][i])
            {
                p++;
            }
        }
        if (a[1][1] == a[2][2] && a[2][2] == a[3][3] && a[3][3] == a[1][1])
        {
            p++;
        }
        if (a[1][3] == a[2][2] && a[2][2] == a[3][1] && a[3][1] == a[1][3])
        {
            p++;
        }
        if (p > 0)
            ans++;
    }
    return ans;
}
bool check(char c1, char c2, char a, char b, char c)
{
    if (a != c1 && a != c2)
        return false;
    if (b != c1 && b != c2)
        return false;
    if (c != c1 && c != c2)
        return false;
    if (a != c1 && b != c1 && c != c1)
        return false;
    if (a != c2 && b != c2 && c != c2)
        return false;
    return true;
}
int work2()
{
    int ans = 0;
    for (char c1 = 'A'; c1 <= 'Z'; c1++)
    {
        for (char c2 = c1 + 1; c2 <= 'Z'; c2++)
        {
            int p = 0;
            for (int i = 1; i <= 3; ++i)
                if (check(c1, c2, a[i][1], a[i][2], a[i][3]))
                    p++;
            for (int i = 1; i <= 3; ++i)
                if (check(c1, c2, a[1][i], a[2][i], a[3][i]))
                    p++;
            if (check(c1, c2, a[1][1], a[2][2], a[3][3]))
                p++;
            if (check(c1, c2, a[1][3], a[2][2], a[3][1]))
                p++;
            if (p > 0)
                ans++;
        }
    }
    return ans;
}

int main()
{
    for (int i = 1; i <= 3; ++i)
        for (int j = 1; j <= 3; ++j)
            cin >> a[i][j];
    cout << work1() << endl;
    cout << work2() << endl;
    // system("pause");
    return 0;
}