#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int a[1000000], c[1000000];
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
        a[i] = c[i];
    }
}
int main()
{
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(1, n);
    int temp = 0;
    int cnt = 1;
    for (int i=1;i<=n;i++){
        if (a[i] != temp && cnt <= k){
            temp = a[i];
            cnt ++;
        }
    }
    if (temp >= a[n]) cout<<"NO RESULT";
    cout<<temp;
    // system("pause");
    return 0;
}
