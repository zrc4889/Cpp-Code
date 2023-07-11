#include <bits/stdc++.h>
using namespace std;
long long n;
int main()
{
    long long m1 = 1e18, m2 = -1e18;
    cin >> n; // n = (a-1) * (b-2) * (c-2)
    for (long long w1 = 1; w1 * w1 * w1 <= n; ++w1)
        if (n % w1 == 0)
        {
            // 是n的yue数
            for (long long w2 = w1; w2 * w2 <= n / w1; ++w2)
            {
                if (n / w1 % w2 == 0)
                {
                    long long w3 = n / w1 / w2;
                    if (w3 < w2)
                        continue;
                    long long a = w1 + 1, b = w2 + 2, c = w3 + 2;
                    m1 = min(m1, a * b * c - n);
                    m2 = max(m2, a * b * c - n);
                    a = w1 + 2;
                    b = w2 + 1;
                    c = w3 + 2;
                    m1 = min(m1, a * b * c - n);
                    m2 = max(m2, a * b * c - n);
                    a = w1 + 2;
                    b = w2 + 2;
                    c = w3 + 1;
                    m1 = min(m1, a * b * c - n);
                    m2 = max(m2, a * b * c - n);
                }
            }
        }
    cout << m1 << " " << m2 << endl;
    return 0;
}
