#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pii pair<int, int>
#define mkp make_pair
#define fir first
#define sec second

const int _ = 100010;

int n, ta, tb;
set<pii> a, b;
// pii<begin, end> 开始和结束的时间
set<pii>::iterator cur;
int aa[_], bb[_];

int solve_a()
{
    int res = 0, now = 0;
    while (1)
    {
        cur = a.lower_bound(mkp(now, now));
        if (cur == a.end())
            break;
        res++;
        now = cur->sec;
        a.erase(cur);
    }
    return res;
}
int solve_b()
{
    int res = 0, now = 0;
    while (1)
    {
        cur = b.lower_bound(mkp(now, now));
        if (cur == b.end())
            break;
        res++;
        now = cur->sec;
        b.erase(cur);
    }
    return res;
}

signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n >> ta >> tb;
    for (int i = 1; i <= ta; i++)
    {
        int _1, _2;
        cin >> _1 >> _2;
        a.insert(mkp(_1, _2));
    }
    for (int i = 1; i <= tb; i++)
    {
        int _1, _2;
        cin >> _1 >> _2;
        b.insert(mkp(_1, _2));
        // warning 遇到双同类型结构注意操作对象！
    }
    aa[0] = 0, bb[0] = 0;
    // f[i] 表示使用 i 条廊桥时最多可停放多少飞机
    // 廊桥每次增加，可停放的飞机只增不减，具有单调性。
    // 考虑每增加一条廊桥看看有哪些飞机增加进来，继承值并加上即可
    // 其中 集合 a b 分别表示国内/国际廊桥还停放在远机位的情况
    // pii 中 fir 与 sec 分别表示飞机开始、结束情况
    for (int i = 1; i <= n; i++)
        aa[i] = aa[i - 1] + solve_a();
    for (int i = 1; i <= n; i++)
        bb[i] = bb[i - 1] + solve_b();
    int ans = -1;
    for (int i = 0; i <= n; i++)
        ans = max(ans, aa[i] + bb[n - i]);
    cout << ans << endl;
    return 0;
}