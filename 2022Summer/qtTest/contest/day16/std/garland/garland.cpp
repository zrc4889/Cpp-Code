#include <bits/stdc++.h>
#define MAXN 300005
using namespace std;
int n, m, f[MAXN], top, st[MAXN];
int ans, tot;
int val[MAXN], pre[MAXN], nxt[MAXN];
bool del[MAXN];
priority_queue<pair<int, int> > h;
int main() {
    freopen("garland.in", "r", stdin);
    freopen("garland.out", "w", stdout);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) scanf("%d", &f[i]);
    st[top = 1] = f[1];
    for (int i = 2; i <= n; i++)
        if (f[i] * f[i - 1] >= 0)
            st[top] += f[i];
        else
            st[++top] = f[i];
    while (st[top] * st[1] >= 0) st[1] += st[top--];
    for (int i = 1; i <= top; i++)
        if (st[i] > 0)
            ans += st[i], tot++;
    if (tot > m) {
        for (int i = 1; i <= top; i++) {
            val[i] = (st[i] > 0) ? st[i] : (-st[i]);
            pre[i] = i - 1;
            nxt[i] = i + 1;
            h.push(make_pair(-val[i], i));
        }
        pre[1] = top;
        nxt[top] = 1;
        while (tot > m) {
            tot--;
            pair<int, int> p = h.top();
            h.pop();
            while (del[p.second]) p = h.top(), h.pop();
            ans += p.first;
            val[p.second] = val[pre[p.second]] + val[nxt[p.second]] - val[p.second];
            del[pre[p.second]] = del[nxt[p.second]] = 1;
            pre[p.second] = pre[pre[p.second]];
            nxt[pre[p.second]] = p.second;
            nxt[p.second] = nxt[nxt[p.second]];
            pre[nxt[p.second]] = p.second;
            h.push(make_pair(-val[p.second], p.second));
        }
    }
    printf("%d\n", ans);
    return 0;
}