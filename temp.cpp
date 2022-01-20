#include <bits/stdc++.h>
using namespace std;
int a[10001];
// char d[100001]="伟大的祖国是我们的家乡";
int main()
{
    double n;
    int k;
    cout << "num:";
    cin >> n;
    cout << "max:";
    cin >> k;
    srand((unsigned)time(0));
    for (int i = 0; i < n; i++)
    {
        int temp = rand() % k + 1;
        a[i] = temp;
        cout << a[i] << " ";
    }
    cout << "accpet?";
    int c;
    double score = 0;
    cin >> c;
    if (c)
    {
        system("cls");
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == a[i])
            {
                score++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl;
    cout << score / n * 100;
    system("pause");
    return 0;
}