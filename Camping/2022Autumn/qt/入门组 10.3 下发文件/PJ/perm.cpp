#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("perm.in", "r", stdin);
    freopen("perm.out", "w", stdout);
    int N;
    cin >> N;

    vector<int> p(N);
    vector<int> q(N); // N 长度的vector
    for (int i = 0; i < N; i++)
        cin >> p[i];
    for (int i = 0; i < N; i++)
        cin >> q[i];

    vector<int> indices(N);
    iota(indices.begin(), indices.end(), 1);
    // 全部初始化成 1

    int pi, qi;
    int cnt = 0;
    do
    {
        bool flag_p = true;
        bool flag_q = true;
        for (int i = 0; i < N; i++)
        {
            if (indices[i] != p[i])
                flag_p = false;
            if (indices[i] != q[i])
                flag_q = false;
            // 进行比对
        }
        if (flag_p)
            pi = cnt;
        if (flag_q)
            qi = cnt;
        cnt++;
    } while (next_permutation(indices.begin(), indices.end()));
    // 生成全排列，洛谷有相关题目

    cout
        << abs(pi - qi) << endl; // abs 我想到了
    return 0;
}