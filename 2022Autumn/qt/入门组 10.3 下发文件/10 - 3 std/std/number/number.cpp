#include <bits/stdc++.h>
#define pb push_back
#define tree int h,int l,int r
#define left (h<<1),l,(l+r)>>1
#define right ((h<<1)|1),((l+r)>>1) + 1,r
#define f first
#define s second
#define ll long long
#define int ll
using namespace std;

const int N = 300005;
int a[N],L[N],R[N];
using T = int;
priority_queue <T, vector <T>, greater <T> > pq1;
priority_queue <T, vector <T>> pq2;

signed main (){
	freopen("number.in", "r", stdin);
	freopen("number.out", "w", stdout);
	
	ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
    int n;
	cin>>n;

	ll s1=0,s2=0;
	for (int i = 1; i <= 3*n; i++){
		cin>>a[i];
		if (i <= n) s1 += a[i],pq1.push(a[i]);
		if (i > 2*n) s2 += a[i],pq2.push(a[i]);
	}
	L[n] = s1;
	for (int i = n + 1; i <= 2*n; i++){
		s1+=a[i];	
		pq1.push(a[i]);
		s1 -= pq1.top();
		pq1.pop();
		L[i] = s1;
	}

	R[2*n + 1] = s2;
	for (int i = 2*n; i > n; i--){
		s2 += a[i];
		pq2.push(a[i]);
		s2 -= pq2.top();
		pq2.pop();
		R[i] = s2;
	}

	ll ans = -1e18;
	for (int i = n; i <= 2*n; i++)
		ans = max(ans,L[i] - R[i + 1]);
	
	cout<<ans;
}