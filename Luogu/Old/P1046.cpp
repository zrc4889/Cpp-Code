#include <bits/stdc++.h>
using namespace std;
int a[10];   // 十个苹果的高度
int b;       // 手升能达到的最大高度
int sum = 0; // 摘到的苹果个数
int main()
{
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    cin >> b;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] <= (b + 30))
        {
            sum++;
        }
    }
    cout << sum;
    return 0;
}