#include <bits/stdc++.h>
using namespace std;
string dir;
int main(){
    int flag = 0;
    cin>>dir;
    int len = dir.size();
    for (int i=0;i<len;i++){
       if (dir[i] == '/'){
           if (flag == 0){
               flag = 1;
               dir[i] = ' '; // 标记为空，特判输出
            //    cout<<dir[i];
           }
       }else{
           flag = 0;
           dir[i] = ' '; // 标记为空
        //    cout<<dir[i];
       }
    }
    // system("pause");
    return 0;
}