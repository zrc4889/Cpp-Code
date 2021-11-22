#include <iostream>
using namespace std;
//待订正

int main()
{
    int a, n, m, x;
    int up[10001], down[10001], now[10001];
    cin >> a >> n >> m >> x;
    now[1] = now[2] = up[1];
    up[2] = down[2] = down[3] = x;
    while (x++ && x >= 3)
    {
        up[x] = up[x - 1] + up[x - 2]; //上车的人数都是前两站上车人数之和
        down[x] = up[x - 1];           //上车的人数都是前两站上车人数之和
        now[x] = up[x - 2] + down[x - 1];
        if (now[x - 1] == m)
        {
            cout << now[x];
            break;
        }
    }
    system("pause");
    return 0;
}