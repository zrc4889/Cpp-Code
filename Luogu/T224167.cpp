#include <bits/stdc++.h>
using namespace std;
string s;
int n;
bool check(int k)
{

    for (int i = 0; i < n - k + 1; ++i)
    {
        //[i..i+k-1]
        //
        int sum = 0; // 总共次数
        bool flag;
        for (int j = 0; j < n - k + 1; ++j) // TODO：2022年2月10日18点39分，++j写成++k了，检查for
        { // 枚举起点
            flag = true;
            for (int l = 0; l < k; ++l)
            {
                if (s[i + l] != s[j + l])
                {
                    // 不相等的
                    flag = false;
                }
            }
            if (flag)
                sum++;
        }
        if (sum != 1)
            return false;
    }
    return true;
}

int main()
{
    cin >> n;
    cin >> s;
    // n = s.size();
    // s[0] ... s[n-1]

    for (int k = 1; k <= n; ++k)
        if (check(k))
            return printf("%d", k), 0;
}