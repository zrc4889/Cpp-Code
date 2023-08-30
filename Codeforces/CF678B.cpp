#include <bits/stdc++.h>
using namespace std;

bool is_lun(int x)
{
    if (x % 400 == 0)
        return true;
    if (x % 4 == 0 && x % 100 != 0)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;

    bool status = is_lun(n);

    int cnt = 0;
    for (int i = n; ; i++)
    {
        if (i != n && status == is_lun(i) && cnt % 7 == 0)
            return cout << i << endl, 0;

        if (is_lun(i))
            cnt += 2;
        else
            cnt += 1;
    }

    return 0;
}