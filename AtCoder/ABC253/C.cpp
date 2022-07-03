#include <bits/stdc++.h>
#include <map>
using namespace std;
map<int, int> mp;
int Q, op, x, c;
int main()
{
    cin >> Q;
    while (Q--)
    {
        scanf("%d", &op);
        if (op == 1)
        {
            scanf("%d", &x);
            mp[x]++;
        }
        else if (op == 2)
        {
            scanf("%d %d", &x, &c);
            if (mp[x] > c)
                mp[x] -= c;
            else
                mp.erase(mp.find(x));
        }
        else
        {
            auto it = mp.end();
            int mx = (--it)->first;
            int mn = mp.begin()->first;

            printf("%d\n", mx - mn);
        }
    }
    return 0;
}