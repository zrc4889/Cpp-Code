#include<iostream>//���ȶ���ʵ��ԭ��������Ϊ��ʵ�����ֵ���� 
#include<algorithm>
using namespace std;
const int N=1000;
int r[N],n;

void Sink(int k){//�³�����
    while(2*k<=n){//���������
        int j=2*k;//jָ������
        if(j<n&&r[j]<r[j+1])//������Һ��������ӱ��Һ���С
            j++;    //jָ���Һ���
        if(r[k]>=r[j])//�Ƚϴ�ĺ��Ӵ�
            break;    //�������
        else
            swap(r[k],r[j]);//��ϴ�ĺ��ӽ���
        k=j;//kָ�򽻻������λ�ã��������±Ƚϣ�һֱ�³���Ҷ��
    }
}

void Swim(int k){//�ϸ�����
    while(k>1&&r[k]>r[k/2]){//�������˫��
        swap(r[k],r[k/2]);//��˫�׽���
        k=k/2;//kָ�򽻻������λ�ã��������ϱȽϣ�һֱ�ϸ�����
    }
}

void CreatHeap(){//������ʼ��
    for(int i=n/2;i>0;i--)//�����һ����֧���n/2��ʼ�³�����Ϊ�ѣ�ֱ����һ�����
        Sink(i);
}

void push(int x){//���
    r[++n]=x;//n��1�󣬽���Ԫ�ط���β��
    Swim(n);//���һ��Ԫ���ϸ�����
}

void pop(){//����
    if(n<1){
		cout<<"����Ϊ��"<<endl; 
		return;
	}
	cout<<r[1]<<endl;//����Ѷ�
    r[1]=r[n--];//���һ��Ԫ�ش���Ѷ���n��1
    Sink(1);//�Ѷ��³�����
}

void print(){//�������������Ԫ�� 
    for(int i=1;i<=n;i++)
        cout<<r[i]<<" ";
    cout<<endl;
}

int main(){
    int select,x;
    cout<<"������Ԫ�ظ�����"<<endl;
    cin>>n;
    cout<<"������"<<n<<"��������"<<endl;
    for(int i=1;i<=n;i++)
        cin>>r[i];
    CreatHeap();//������ʼ��
    while(true){
        cout<<"��ѡ�����֣�1.��ӣ�2.���ӣ�3.�����0.�˳�"<<endl;
        cin>>select;
        switch(select){
            case 1:
                cout<<"�������Ԫ�أ�"<<endl;
                cin>>x;
                push(x);//���
                break;
            case 2:
                pop();//����
                break;
            case 3:
                print();//�������������Ԫ�� 
                break;
            case 0:
                return 0;
        }
    }
    return 0;
}
/*
10
30 28 20 16 18 2 16 6 10 12
*/
