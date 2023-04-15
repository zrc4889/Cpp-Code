#include<bits/stdc++.h>
using namespace std;
double n,m,ans=0;
double qpow(double x,int y){
	double ans=1.00;
	while(y){
		if(y&1) ans=ans*x;
		x=x*x;
		y>>=1;
	}
	return ans;
}
int main(){
	cin>>m>>n;
	ans=m;
	for(int i=1;i<=m-1;i++){
		ans-=pow((m-i)/m,n);
	}
	printf("%.12lf",ans);
	return 0;
}
