#include <bits/stdc++.h>
using namespace std;

int n, q;
map<int, vector<int>> mp;
map<int, int> list;

void follow(int a, int b)
{
    mp[a][b] = 1;
}
void unfollow(int a, int b)
{
    mp[a][b] = 0;
}
void check(int a, int b)
{
    cout << (mp[a][b] ? "Yes" : "No") << endl;
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n >> q;
    while (n--)
    {
        int op, a, b;
        cin >> op;
        cin >> a >> b;
        if (op == 1)
        {
            follow(a, b);
        }
        else if (op == 2)
        {
            unfollow(a, b);
        }
        else if (op == 3)
        {
            check(a, b);
        }
    }
    return 0;
}