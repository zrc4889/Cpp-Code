#include <iostream>
using namespace std;

int n;
int a[100000];
void bubbleSort() {
	for (int i=0; i<n-1; i++) {
		for (int j=0; j<n-1; j++) {
			if (a[j]>a[j+1]) {
				swap(a[j],a[j+1]);
			}
		}
	}
}

int main() {
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>a[i];
	}
	bubbleSort();//ц╟ещеепР
	int l=n;
	for (int i=0; i<n; i++) {
		if (a[i]==a[i+1]) {
			l--;	
		}
	}
	cout<<l<<endl;
	for (int i=0; i<n; i++) {
		if (a[i]!=a[i+1]) {
			cout<<a[i]<<" ";
		}
	}
	system("pause");return 0;
}

