#include <bits/stdc++.h>
using namespace std;

int a[10001], b[10001];
int la, lb;
int m = 0;
string a1, b1;

int main()
{
    cin >> a1 >> b1;
    la = a1.length(), lb = b1.length();
    for (int i = 0; i <= la - 1; i++)
        a[la - i - 1] = a1[i] - '0';
    for (int i = 0; i <= lb - 1; i++)
        b[lb - i - 1] = b1[i] - '0';
    if (la >= lb)
    {
        int temp;
        for (int i = 0; i <= la - 1; i++)
            temp = a[i], a[i] = (b[i] + a[i] + m) % 10, m = (temp + b[i] + m) / 10;
        if (m)
            a[la] = m;
        else
            la--;
        for (int i = la; i >= 0; i--)
            cout << a[i];
    }
    else
    {
        int temp;
        for (int i = 0; i <= lb - 1; i++)
            temp = b[i], b[i] = (b[i] + a[i] + m) % 10, m = (temp + a[i] + m) / 10;
        if (m)
            b[lb] = m;
        else
            lb--;
        for (int i = lb; i >= 0; i--)
            cout << b[i];
    }
    return 0;
}