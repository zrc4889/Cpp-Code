#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int s, v;
    cin >> s >> v;
    int tmp = s / v;
    if (s % v)
        tmp++;
    int miu, hur;
    miu = 50, hur = 7;
    int i = 0;
    if (miu - tmp < 0)
        while (miu < tmp)
            i++, miu += 60;
    miu -= tmp;
    hur -= i;
    if (hur < 0)
        hur = 24 + hur;
    printf("%02d:%02d", hur, miu);
    // cout << hur << ':' << miu;
    return 0;
}