#include <iostream>
using namespace std;
int n;
int k;
int a[100000];
int num[100000];

int bs(int l, int r, int x){
	while (l <= r){
		int mid = (l+r)/2;
		if (a[mid] > x) l = mid + 1;
		else if (a[mid] < x) r = mid - 1;
	}
	return l;
}

int main(){
	cin>>n>>k;
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	while(k--){
		cin>>num[k];
		int l = bs(1 ,n ,num[k]);
		if (l == n + 1 || a[l] != x	){
			cout<<"-1";
		}
		else{
			cout<<l;
		}
	}
	return 0;
}
//int a[N], x, n;
//
//bool bs(int l, int r, int x) {
//	while(l <= r) {
//		int mid = (l + r) / 2;
//		if(a[mid] < x) l = mid + 1;
//		else if(a[mid] > x) r = mid - 1;
//		else return 1;
//	}
//	return 0;
//}
//
//第一个大于等于的位置：1 3 7 7 7 9    x = 7  position: 2; x = 8 position: 5
//
//int lowerBound(int l, int r, int x) {
//	while(l <= r) {
//		int mid = (l + r) / 2;
//		if(a[mid] < x) l = mid + 1;
//		else r = mid + 1;
//	}
//	return l;
//}
//
//第一个大于的位置：1 3 7 7 7 9     x = 2 position: 1
//
//int upperBound(int l, int r, int x) {
//	while(l <= r) {
//		int mid = (l + r) / 2;
//		if(a[mid] <= x) l = mid + 1;
//		else r = mid - 1;
//	}
//	return l;
//}
//
//
//upperBound - lowerBound  
//
//
//int main() {
//	cin >> n;
//	for(int i = 0; i < n; ++i) cin >> a[i];
//	cin >> x;
//	return 0;
//}


