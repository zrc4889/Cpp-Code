/*
  复习一下卡特兰数，以备考试考上模板（虽然可能性不大）
  递推式：h[1]=1,h[i]=(4*i-2)*h[i-1]/(n+1)
  数列模式：1 1 2 5 14 42 132 429 ……
*/
#include <cstdio>
#include <iostream>
#define lon long long
using namespace std;
lon h[40];
int n;
int main() {
    scanf("%d", &n);
    h[1] = 1;
    for (int i = 2; i <= n; i++) {
        h[i] = (lon)(4 * i - 2) * h[i - 1] / (lon)(i + 1);
    }
    cout << h[n];
    return 0;
}