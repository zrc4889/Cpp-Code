#include <bits/stdc++.h>
using namespace std;
//这个x坐标有个ruan用。。。。
int x;
int y[10001];
int n, sum = 0; //min 最小长度和
int temp[10001];
void sort(int l, int r)
{
    if (l >= r)
        return;
    int mid = (l + r) / 2;
    sort(l, mid);
    sort(mid + 1, r);
    int i = l, j = mid + 1, k = l;
    while (i <= mid && j <= r)
    {
        if (y[i] < y[j])
        {
            temp[k++] = y[i++];
        }
        else
        {
            temp[k++] = y[j++];
        }
    }
    while (i <= mid)
    {
        temp[k++] = y[i++];
    }
    while (j <= r)
    {
        temp[k++] = y[j++];
    }
    for (int i = 0; i < n; i++)
    {
        y[i] = temp[i];
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y[i];
    }
    x = 0; //丢了
    sort(y, y + n);
    for (int i = 0; i < n; i++)
    {
        sum += fabs(y[i] - y[n / 2]); // 取最中间的，肯定最短。
        // fabs 求浮点数的绝对值
    }
    cout << sum;
    // system("pause");
    return 0;
}
