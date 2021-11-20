#include <iostream>
const int MAX = 10001;
using namespace std;

int N, Na, Nb;
int a[MAX], b[MAX];
int Sa=0, Sb=0;
int ver[5][5]={{0,0,1,1,0},{1,0,0,1,0},{0,1,0,0,1},{0,0,1,0,1},{1,1,0,0,0}}; 
int main() {
	cin>>N>>Na>>Nb;
	for (int i=0; i<Na; i++) {
		cin>>a[i];
	}
	for (int i=0; i<Nb; i++) {
		cin>>b[i];
	}
	for(int i=0;i<N;i++){
		Sa+=ver[a[i%Na]][b[i%Nb]];
		Sb+=ver[b[i%Nb]][a[i%Na]];
	} 
	cout<<Sa<<" "<<Sb;
	system("pause");
	return 0;
}
