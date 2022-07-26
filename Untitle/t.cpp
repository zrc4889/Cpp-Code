#include <bits/stdc++.h>
#include <deque>
#define N 1000000
using namespace std;
int n, m;
int a[N];
int u = 0, y = 0;
int l[N], r[N];
int sum;
int v(int a[N], int length)
{
    int count = 0;
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (a[i] > a[j])
                count++;
        }
    }
    return count;
}

deque<int> q;
signed main()
{
#ifdef LOCAL
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
#endif
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        q.push_back(a[i]);
    }
    for (int i = 1; i <= m; i++)
    {
        int t;
        cin >> t;
        /*  if (t == 1)
          {
              int l1, l2, r1,r2;
              cin >> l1 >> l2 >> r1 >> r2;
              for (int j = l1; j <= r1; j++)
              {
                  u++;
                  l[u] = a[j];
                  a[j]=0;
              }
              for (int z = l2; z <= r2; z++)
              {
                  y++;
                  r[u] = a[z];
                  a[z]=0;
              }
              for()
          }
          if (t == 2)*/
        if (t == 3)
        {
            int x;
            cin >> x;
            q.push_back(x);
            int o = q.size();
            for (int p1 = 1; p1 <= o; p1++)
            {
                l[i] = q.front();
                q.pop_front();
            }
            for (int p1 = 1; p1 <= o; p1++)
            {
                q.push_back(l[i]);
            }
            sum = v(l, o);
            if (sum % 2 == 0)
                cout << "even" << endl;
            if (sum % 2 != 0)
                cout << "odd" << endl;
        }
        if (t == 4)
        {
            int x;
            cin >> x;
            q.push_front(x);
            if (q.size() % 2 == 0)
                cout << "even" << endl;
            if (q.size() % 2 != 0)
                cout << "odd" << endl;
        }
    }
    return 0;
}