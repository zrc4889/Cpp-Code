#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int a[10001], b[10001], c[100001];
int n, m;
// void sort(int l, int r)
// {
//     if (l >= r)
//     {
//         return;
//     }
//     int mid = (l + r) / 2;
//     sort(l, mid);
//     sort(mid + 1, r);
//     int i = l, j = mid + 1, k = l;
//     while (i <= mid && j <= r)
//     {
//         if (a[i] < a[j])
//         {
//             c[k++] = a[i++];
//         }
//         else
//         {
//             c[k++] = a[j++];
//         }
//     }
//     while (i <= mid)
//     {
//         c[k++] = a[i++];
//     }
//     while (j <= r)
//     {
//         c[k++] = a[j++];
//     }
//     for (int i = l; i <= r; ++i)
//     {
//         a[i] = c[i]; //克隆一下
//     }
// }
void bubble_sort(){
    for (int i=1;i<=n+m;++i){
        for (int j=1;j<=n+m;++j){
            if (c[i]<c[j]){
                swap(c[i],c[j]);
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    // int i = 1;
    for (int i = 1; i <= n + m; i++)
    {
        cin >> c[i];
    }
    // sort(c, c + n);
    // for (int i=1;i<=n;i++) cout<<a[i];
    bubble_sort();
    for (int i = 1; i <= n + m; i++)
        cout << c[i] << " ";
    system("pause");
    return 0;
}