#include <iostream>
#include <algorithm>
using namespace std;
int n,m;
int a[200000];
int main(){
	
	cin>>n>>m; 
	for (int i=0;i<m;i++){
		cin>>a[i];
	}
	sort(a,a+m);
	for (int i=0;i<m;i++){
		cout<<a[i]<<" ";
	}system("pause");
	return 0;
}

