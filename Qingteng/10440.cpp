#include <bits/stdc++.h>
using namespace std;
double expr()
{
    char a[31];
    cin >> a;
    char c = a[0];
    switch (c)
    {
    case '+':
        return expr() + expr();
    case '-':
        return expr() - expr();
    case '*':
        return expr() * expr();
    case '/':
        return expr() / expr();
    default:
        return atof(a);
    }
}

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    printf("%.6f", expr());
    return 0;
}