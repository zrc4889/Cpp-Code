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
			s.pop(); //�ȵ�ǰ�߶ȸߵ�ֱ�ӵ�����ע��Ҫ��֤ջ����Ԫ�أ�������ܻ����
        if(!s.empty()&&s.top()==x) continue;
			//����Ҫ��ֱ�ӽ�����һ��ѭ��
        if(x) sol++,s.push(x);
			//ע�⣬����ԭ������ȫ0���У����Ե��߶�Ϊ0ʱ�ǲ���Ҫ�任�ģ�Ҳ�Ͳ���Ҫѹ��ջ��
    }
    printf("%d",sol);
    return 0;
}
