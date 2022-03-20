#include <bits/stdc++.h>
using namespace std;

struct Sta
{
    int x, y, step;
};
bool f[200][200];
queue<Sta> q;
int X, Y, Z;
int main()
{
    cin >> X >> Y >> Z;
    Sta init;
    init.x = 0, init.y = 0, init.step = 0;
    q.push(init);
    f[0][0] = true; // 丢进去，标记一下
    while (!q.empty())
    {
        Sta cur = q.front();
        q.pop(); // 当前状态
        int x = cur.x, y = cur.y, s = cur.step;
        if (x == Z || y == Z)
        {
            cout << s << endl;
            return 0;
        } // 已经倒完了

        // 六种拓展

        // x->0
        if (x != 0) // 本身不为空就可以倒了
        {
            if (!f[0][y])
            {
                Sta nxt;
                nxt.x = 0, nxt.y = y, nxt.step = s + 1;
                q.push(nxt);
                f[0][y] = true;
            }
        } // x->X
        if (x != X)
        {
            if (!f[X][y])
            {
                Sta nxt;
                nxt.x = X, nxt.y = y, nxt.step = s + 1;
                q.push(nxt);
                f[X][y] = true;
            }
        }

        // y->0
        if (y != 0) // 本身不为空就可以倒了
        {
            if (!f[x][0])
            {
                Sta nxt;
                nxt.x = x, nxt.y = 0, nxt.step = s + 1;
                q.push(nxt);
                f[x][0] = true;
            }
        } // y->Y
        if (y != Y)
        {
            if (!f[x][Y])
            {
                Sta nxt;
                nxt.x = x, nxt.y = Y, nxt.step = s + 1;
                q.push(nxt);
                f[x][Y] = true;
            }
        }
        // x -> y;

		int d = min(x, Y - y);
		if (d > 0)
		{

			if (!f[x - d][y + d])
			{
				Sta nxt;
				nxt.x = x - d, nxt.y = y + d, nxt.step = s + 1;
				q.push(nxt);
				f[x - d][y + d] = true;
			}
		}

		// y -> x
		d = min(y, X - x);

		if (d > 0)
		{
			if (!f[x + d][y - d])
			{
				Sta nxt;
				nxt.x = x + d, nxt.y = y - d, nxt.step = s + 1;
				q.push(nxt);
				f[x + d][y - d] = true;
			}
		}
        
    }cout << "impossible" << endl;
}