#include <bits/stdc++.h>

#define Read(s) freopen(s ".in", "r", stdin);
#define Write(s) freopen(s ".out", "w", stdout);

using namespace std;

struct Post {
    int num;
    string spj;
} p[10001];

string k[10001];
int size;

bool cmp(Post a, Post b) { return a.num < b.num; }

int strToInt(string t) {
    int tmp = 0;

    for (int i = 0; i < t.size(); i++) tmp = tmp * 10 + t[i] - '0';

    return tmp;
}

int main() {
    Read("wedding");
    Write("wedding");

    while (cin >> k[++size])
        ;

    size /= 2;
    for (int i = 1; i <= size; i++) p[i].num = strToInt(k[i]), p[i].spj = k[i + size];

    sort(p + 1, p + size + 1, cmp);

    for (int i = 1; i <= size; i++) cout << p[i].spj << endl;
}