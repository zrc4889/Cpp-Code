#include<bits/stdc++.h>
using namespace std;
int n,sol,x;
stack<int>s;
int main()
{
	freopen("array.in", "r", stdin);
	freopen("array.out", "w", stdout); 
    scanf("%d",&n);
    while(n--) {
        scanf("%d",&x);
        while(!s.empty()&&s.top()>x) 
			s.pop(); //比当前高度高的直接弹出，注意要保证栈里有元素，否则可能会出错
        if(!s.empty()&&s.top()==x) continue;
			//符合要求直接进入下一层循环
        if(x) sol++,s.push(x);
			//注意，由于原序列是全0序列，所以当高度为0时是不需要变换的，也就不需要压入栈中
    }
    printf("%d",sol);
    return 0;
}
