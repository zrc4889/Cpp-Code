#include <iostream>
using namespace std;

int a[1000000];
int n;
void quick_sort(int l,int r) {
	int x = a[(l + r) / 2];
	int i = l;
	int j = r;
	while (i <= j) {
		while (a[i] < x) {
			++i;
		}
		while (a[j] > x) {
			--j;
		}
		if (i <= j) {
			swap(a[i],a[j]);
			i++;
			j--;
		}
	}
	if (l < j) quick_sort(l, j);
	if (i < r) quick_sort(i, r);
}

int main() {
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>a[i];
	}
	quick_sort(0,n);

	for (int i=1; i<=n; i++) {
		cout<<a[i]<<" ";
	}
	cout<<endl;system("pause");
	return 0;
}

