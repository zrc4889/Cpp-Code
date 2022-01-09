#include <bits/stdc++.h>
using namespace std;
string s;
char a[100001];
int n;
int ans = 0;
int p[30];

void dfs(int x)
{
    if (x = n + 1)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << a[i];
        }
        cout << endl;
        ans++;
    }
    for (int i = 0; i <= 26; i++)
    {
        if (p[i] > 0)
        {
            a[x] = (char)(i + 'a');
            p[i]++;
            dfs(x + 1);
            p[i]--;
        }
    }
}

int main()
{
    cin >> n >> s;
    int len = s.size();
    for (int i = 0; i < n; i++)
    {
        p[s[i] - 'a']++;
    }
    dfs(1);
    system("pause");
    return 0;
}