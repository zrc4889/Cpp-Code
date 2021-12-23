#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int a[1000000], c[1000000],o[100001];
int n, k;
void sort(int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int mid = (l + r) / 2;
    sort(l, mid);
    sort(mid + 1, r);
    int i = l, j = mid + 1, k = l;
    while (i <= mid && j <= r)
    {
        if (a[i] < a[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = a[j++];
        }
    }
    while (i <= mid)
    {
        c[k++] = a[i++];
    }
    while (j <= r)
    {
        c[k++] = a[j++];
    }
    for (int i = l; i <= r; ++i)
    {
        a[i] = c[i]; //克隆一下
    }
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(1, n);
    // for (int i = 1; i <= n; i++)
    //     cout << a[i] << " ";

    cin>>k;
    for (int i=0;i<k;i++){
        int temp;
        cin>>temp;
        o[i] = a[temp];
        // cout<<a[i]<<endl;
    }
    for (int i=0;i<k;i++){
        cout<<o[i]<<endl;
    }
    /*记得把system去掉，不然被骂！！！！！！！！！！！！！！！！！*/
    // system("pause");
    return 0;
}
