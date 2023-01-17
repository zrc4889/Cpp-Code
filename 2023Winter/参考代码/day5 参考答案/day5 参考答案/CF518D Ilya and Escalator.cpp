#include <bits/stdc++.h>
using namespace std;
double f[2010][2010];
int main(){
    int n,T;
    double p;
    scanf("%d%lf%d",&n,&p,&T);
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= T;j++){//设期望
            f[i][j] = (f[i - 1][j - 1] + 1) * p + f[i][j - 1] * (1 - p);
        }
    }
    printf("%.7lf",f[n][T]);
    return 0;
}