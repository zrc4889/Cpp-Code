#include <bits/stdc++.h>
using namespace std;

const int _ = 1e5 + 10;

int pi[_];
string patt, text;

void next_init(string s)
{
    int n = (int)s.length();
    pi[0] = 0;
    for (int i = 1; i < n; ++i)
    {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j])
            j = pi[j - 1];
        
        if (s[i] == s[j]) ++j;
        pi[i] = j;
    }
    // 我不太理解 KMP 算法是什么
}

