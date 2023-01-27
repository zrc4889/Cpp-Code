#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    freopen("fxxk.txt", "w", stdout);

    int n = s.size();

    for (int a1 = 0; a1 < n; a1++)
        for (int a2 = 0; a2 < n; a2++)
            for (int a3 = 0; a3 < n; a3++)
                for (int a4 = 0; a4 < n; a4++)
                    for (int a5 = 0; a5 < n; a5++)
                        for (int a6 = 0; a6 < n; a6++)
                            for (int a7 = 0; a7 < n; a7++)
                                printf("%c%c%c%c%c%c%c\n", s[a1], s[a2], s[a3], s[a4], s[a5], s[a6], s[a7]);
    return 0;
}