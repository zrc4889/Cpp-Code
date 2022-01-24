#include<bits/stdc++.h>
using namespace std;
int n, a[100000], b[100000];
int main() {
  scanf("%d",&n);
  for (int i = 1; i <= n; i++) cin >> a[i], b[i] = a[i];
  sort(b + 1, b + n + 1);
  int ans = 0;
  for (int i = 1; i <= n; ++i) if (a[i] != b[i]) ans ++;

  if (ans != 0) ans --;
  cout << ans;
  return 0;
}