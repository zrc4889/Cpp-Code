#include <iostream>
using namespace std;
//待订正

int main()
{
    int a, n, m, x;
    int up[10001], down[10001], now[10001];
    cin >> a >> n >> m >> x;
    now[0] = now[1] = up[0] = x;
    while (x++ && x >= 2 && x!=1001)
    {
        up[x] = up[x - 1] + up[x - 2]; //上车的人数都是前两站上车人数之和
        down[x] = down[x - 1];         //上车的人数都是前两站上车人数之和
        now[x] = up[x - 2] + down[x - 1];
    }
    cout<<now[x]<<endl;
    for (int i=0;i<10;i++){
        cout<<up[i]<<" "<<down[i]<<" "<<now[i]<<" "<<endl;
    }
    system("pause");
    return 0;
}