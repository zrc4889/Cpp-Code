#include<bits/stdc++.h>
#define int long long
#define NO_SOLUTION printf("-1");return 0

namespace mathematicsh{
	inline int base_gcd(int a,int b){
		return (a%b==0?b:base_gcd(b,a%b));
	}
	inline bool isprime_Osqrtn(int n){
		if(n<2)return 0;
		for(int i=2;i*i<=n;i++)if(n%i==0)return 0;
		return 1;
	}
	inline int base_int_power2(int x){return x*x;}
	inline double base_Eulid_distance(int x1,int y1,int x2,int y2){
		return sqrt(base_int_power2(x1-x2)+base_int_power2(y1-y2));
	}
	inline int Euler_phi_On(int n){
		int sum=0;
		for(int i=1;i<=n;i++){
			if(base_gcd(i,n)==1)sum++;
		}
		return sum;
	}
	inline int base_Manhattan_distance(int x1,int y1,int x2,int y2){
		return abs(x1-x2)+abs(y1-y2);
	}
}

#define err() cout<<"err "<<__LINE__<<endl,exit(0)
#define pot(args...) \
GPT(#args),cout<<"  Line "<<__LINE__<<"\t: ", \
PPT(args),cout<<"\n\n"
using namespace std;
using namespace mathematicsh;
void PPT(){}
template<typename TYPE,typename... TYPES>
void PPT(const TYPE& x,const TYPES&... y){
    cout<<x<<' ';
    PPT(y...);
}
void GPT(string nam){cout<<setw(29)<<nam;}

inline bool isnum(char ch){return ch>='0'&&ch<='9';}
inline int read()
{
	int x=0,f=1;char ch=getchar();
	while (!isnum(ch)){if (ch=='-') f=-1;ch=getchar();}
	while (isnum(ch)){x=x*10+ch-48;ch=getchar();}
	return x*f;
}
inline void out(int x,char ch){
    if(x<0){putchar('-');x=-x;}
    if(x>9)out(x/10,'/');
    putchar(x%10+'0');
    if(ch=='l')putchar('\n');
    if(ch=='s')putchar(' ');
}
inline int slen(string s){return s.size();}
const int maxn=3e5+10;
int n=read(),a[maxn],tot,user,sum;
double maxx=-1145141919810;
inline bool cmp(int a,int b){
	return a>b;
}
signed main()
{
	for(int i=1;i<=n;i++)a[i]=read(),tot+=a[i];
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		if((sum/tot)-(user+1)/n<maxx)break;
		sum+=a[i];user++;maxx=(sum*1.0/tot)-user*1.0/n;
		//pot(sum,a[i],user,maxx,tot);
	}
	printf("%.12lf\n%.12lf\n",(user*1.0/n),(sum*1.0/tot));
	return 0;
}

