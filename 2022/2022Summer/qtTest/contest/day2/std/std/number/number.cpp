#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <string>
#include <cstring>
#include <map>
#include <set>
#include <queue>
double MIN(double x, double y) { return x < y ? x : y; }
double MAX(double x, double y) { return x > y ? x : y; }
#define lowbit(x) ((x) & (-(x)))
typedef long long ll;
const int MAXN = 5467;
const ll MID = 1e6;
const ll REST = 1e3;
const ll TOT = 1e9;
using namespace std;

ll n, ne;
ll stk[MAXN], tp;

int main()
{
    freopen("number.in", "r", stdin);
    freopen("number.out", "w", stdout);
    scanf("%lld", &n);
    ne = n % MID;
    for (ll i = 0; i < MID; i++)
    {
        if (i * i % MID == ne)
            stk[++tp] = i;
    }
    for (ll i = 0; i < REST; i++)
    {
        for (ll j = 1; j <= tp; j++)
        {
            if ((i * MID + stk[j]) * (i * MID + stk[j]) % TOT == n)
                printf("%09lld\n", i * MID + stk[j]);
        }
    }
    return 0;
}