#include <bits/stdc++.h>
using namespace std;
const int N = 2e6+10;
typedef pair<int, int> PII;
priority_queue<PII, vector<PII>, greater<PII> >q;
int a[N],b[N],c[N],n,m,ans=0,x[N];
int f(int i, int x) {
	return a[i]*x*x+b[i]*x+c[i];

}
int main() {
	cin>>n>>m;
	for (int i=1; i<=n; i++) {
		cin>>a[i]>>b[i]>>c[i];
		m--;
		ans+=f(i,1);
		q.push(make_pair(f(i,2)-f(i,1),i));
		x[i]=1;
	}
	while (m>0) {
		ans+=q.top().first;
		q.pop();
		x[k] ++;
		m--;
		q.push(make_pair(f(k,x[k]+1)-f(k,x[k]),k));
	}
	cout<<ans<<endl;
	return 0;
}
