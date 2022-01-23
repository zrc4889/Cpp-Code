#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l1, r1, l2, r2, x1, y1, x2, y2;
    cin >> l1 >> r1 >> l2 >> r2 >> x1 >> y1 >> x2 >> y2;
    if (l1 > l2)
        swap(l1, l2);
    if (r1 > r2)
        swap(r1, r2);

    if (x1 > x2)
        swap(x1, x2);
    if (y1 > y2)
        swap(y1, y2);

    if (x1 <= l1 && l2 <= x2 && y1 <= r1 && r2 <= y2)
        cout << 0 << endl;
    else if (x1 <= l1 && l2 <= x2 && y1 <= r2 && r2 <= y2)
        cout << (l2 - l1) * (y1 - r1) << endl;
    else if (x1 <= l1 && l2 <= x2 && y1 <= r1 && r1 <= y2)
        cout << (l2 - l1) * (r2 - y2) << endl;
    else if (y1 <= r1 && r1 <= y2 && l1 <= x2 && x2 <= l2)
        cout << (r2 - r1) * (l2 - x2);
    else if (y1 <= r1 && r2 <= y2 && l1 <= x1 && x1 <= l2)
        cout << (r2 - r1) * (x1 - l1);
    else
        cout << (l2 - l1) * (r2 - r1);
        system("pause");
    return 0;
}