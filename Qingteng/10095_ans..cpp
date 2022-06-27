#include <bits/stdc++.h>

using namespace std;

queue<string> q;

set<string> w;
int main()
{
    string init;
    cin >> init; // 283104765
    w.insert(init);

    q.push(init);
    int level = 0;

    while (!q.empty())
    {
        int n = q.size();

        for (int i = 0; i < n; ++i)
        {
            string s = q.front();
            q.pop();

            int p = s.find('0');

            if (s == "123804765")
            {
                cout << level << endl;
                return 0;
            }

            if (p >= 3)
            {
                string now = s;
                swap(now[p], now[p - 3]);

                if (w.find(now) == w.end())
                {
                    w.insert(now);
                    q.push(now);
                }
            }

            if (p % 3 != 0)
            {
                string now = s;
                swap(now[p], now[p - 1]);

                if (w.find(now) == w.end())
                {
                    w.insert(now);
                    q.push(now);
                }
            }

            if (p <= 5)
            {
                string now = s;
                swap(now[p], now[p + 3]);

                if (w.find(now) == w.end())
                {
                    w.insert(now);
                    q.push(now);
                }
            }

            if (p % 3 != 2)
            {
                string now = s;
                swap(now[p], now[p + 1]);

                if (w.find(now) == w.end())
                {
                    w.insert(now);
                    q.push(now);
                }
            }
        }

        level++;
    }
}