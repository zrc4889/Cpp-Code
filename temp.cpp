#include <bits/stdc++.h>
using namespace std;
char str[4];
long long n;
int main(){
    cin >> str >> n;
    int l = strlen(str);
    int len = l;
    while (n<l) l*=2; // 没有找到最小位置就一直翻倍
    for (int i=0;i<l;i++){
        // 寻找每一个
        if (i % len == 1){
            
        }
        else{
            len *= 2;
        }
    }
    return 0;
}