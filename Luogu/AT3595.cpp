#include <bits/stdc++.h>
using namespace std;
int h,w;
char s[51][51];
int f(int x,int y){
    int ans=0;
    if (s[x-1][y-1] == '#') ans++;
    if (s[x-1][y] == '#') ans++;
    if (s[x-1][y+1] == '#') ans++;
    if (s[x][y-1] == '#') ans++;
    // if (s[x][y] == '#') // 中间不算
    if (s[x][y+1] == '#') ans++;
    if (s[x+1][y-1] == '#') ans++;
    if (s[x+1][y] == '#') ans++;
    if (s[x+1][y+1] == '#') ans++;
    return ans;
}
int main(){
    cin>>h>>w;
    for (int i=0;i<h;i++){
        for (int j=0;j<w;j++){
            cin>>s[i][j];
        }
    }
    for (int i=0;i<h;i++){
        for (int j=0;j<w;j++){
            if (s[i][j] == '.'){
                int temp = f(i,j);
                s[i][j] = temp + '0';
            }
        }
    }
    for (int i=0;i<h;i++){
        for (int j=0;j<w;j++){
            cout<<s[i][j];
        }
        cout<<endl;
    }
    // system("pause");
    return 0;
}