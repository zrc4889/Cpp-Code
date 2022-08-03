#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> L[2], H[2];
int M;
void match(vector<int> &l, vector<int> &h)
{
    if (l.empty() || h.empty())
        return;
    for (int i = l.size() - 1, j = h.size() - 1; i >= 0; --i, --j, ++M)

    {
        while (j >= 0 && h[j] >= l[i])
            --j;
        if (j < 0)
            return; // 没人了
    }
}

int main()
{
    freopen("dance.in", "r", stdin);
    freopen("dance.out", "w", stdout);
    cin >> N;

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            int h;
            cin >> h;
            if (h < 0)
                L[i].push_back(-h); // 负数情况
            else
                H[i].push_back(h);
        }
        sort(L[i].begin(), L[i].end());
        sort(H[i].begin(), H[i].end());
    }
    match(L[0], H[1]);
    match(L[1], H[0]);

    cout << M << endl;
}