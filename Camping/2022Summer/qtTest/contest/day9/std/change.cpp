#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <queue>
#include <vector>
#include <time.h>
#define LL long long
#define MXN 1000010
using namespace std;
int T;
int record[MXN],record2[MXN];
LL m,hh1,hh2,aa1,aa2,xx1,xx2,yy1,yy2;
LL A1,A2,B1,B2,D1,D2;
inline void solve(){
	scanf("%d", &T);
	while(T--) {
		scanf("%d%d%d%d%d%d%d%d%d",&m,&hh1,&aa1,&xx1,&yy1,&hh2,&aa2,&xx2,&yy2);
		memset(record, 0, sizeof(record));
		memset(record2, 0, sizeof(record2));
		A1 = A2 = B1 = B2 = D1 = D2 = 0; //
		LL tmp=hh1,tmp2=hh2,noww=0;
		bool ok=0, ok3 = 0; //
		while(1) {
			noww++;
			tmp=(xx1*tmp+yy1)%m;tmp2=(xx2*tmp2+yy2)%m;
			if(!record[tmp]) record[tmp]=noww;
			else if(!B1) {B1=noww-record[tmp];D1=record[tmp]-1;} /////////
			if(!record2[tmp2]) record2[tmp2]=noww;
			else if(!B2) {B2=noww-record2[tmp2];D2=record2[tmp2]-1;} /////////

			if(tmp==aa1&&!A1) A1=noww;
			if(tmp2==aa2&&!A2) A2=noww;
			if(tmp==aa1&&tmp2==aa2) {printf("%I64d\n",noww);ok3 = 1 ;break; }
			if(B1&&B2) break;
		}
		if(ok3) continue; ////
		if(A1<=D1||A2<=D2) ok=1; /////////////
		if(!A1||!A2||ok) {printf("-1\n");continue ;} ////
		LL t=A1-A2;
		bool ok2 = 1;
		for(LL X1=0;X1<=3000000;X1++){ //
			if((B1*X1+t)>0&&(B1*X1+t)%B2==0) {printf("%I64d\n",B1*X1+A1);ok2 = 0; break;}
		}
		if(ok2) printf("-1\n"); //
	}
} ///-1
int main(){
	freopen("change.in", "r", stdin);
	freopen("change.out", "w", stdout);
	solve();
	return 0;
}
