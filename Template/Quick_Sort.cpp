#include <bits/stdc++.h>
using namespace std;
//数据大的时候用scanf，cin太慢
int a[100001];
int n;
void sort(int *a, int l, int r)
{
    if (l >= r) return;

}
void print(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    print(a, n);
    system("pause");
    return 0;
}