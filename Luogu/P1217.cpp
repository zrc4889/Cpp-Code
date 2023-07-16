#include <bits/stdc++.h>
using namespace std;

const int _ = 1e7 + 1;
bool book[_];

void prime(int b)
{
    // 埃氏筛法
    memset(book, true, sizeof book);
    book[1] = false;
    for (int i = 2; i <= sqrt(b); i++)
    {
        if (book[i])
        {
            for (int j = 2; j <= b / i; j++)
            {
                book[i * j] = false;
            }
        }
    }
}

bool check(int num)
{
    int temp, ans;
    temp = num, ans = 0;
    while (temp)
    {
        ans = ans * 10 + temp % 10;
        temp /= 10;
    }
    return ans == num;
}

int main()
{
    int l, r;
    cin >> l >> r;
    if (r >= 10000000)
        r = 9999999;
    prime(r);
    if (l > r)
        return 0; // 区间不合法
    if (l % 2 == 0)
        l++;
    for (int i = l; i <= r; i += 2)
    {
        if (book[i] && check(i))
            cout << i << endl;
    }
    return 0;
}