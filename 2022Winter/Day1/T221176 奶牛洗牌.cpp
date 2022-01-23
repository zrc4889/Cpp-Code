#include<bits/stdc++.h>
using namespace std;
int n, a[105];
string cow[105], t[105];
int main() {
  scanf("%d",&n);

  for (int i = 1; i <= n; i++) cin >> a[i];
  for (int i = 1; i <= n; i++) cin >> cow[i];

  for (int i = 1; i <= 3; i++) {
      for (int j = 1; j <= n; j++) {
          t[j] = cow[a[j]];
      }
      for(int j = 1; j <= n; j++) {
          cow[j] = t[j];
      }
  }
  for (int i = 1; i <= n; i++)
      cout << cow[i] << endl;
  return 0;
}