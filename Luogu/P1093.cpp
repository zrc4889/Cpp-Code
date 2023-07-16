#include <iostream>
#include <algorithm>
using namespace std;
struct student {
	int num;
	int ch;
	int ma;
	int en;
	int su;
};

bool cmp(student a,student b) {
	if(a.su>b.su) {
		return true;
	} else if(a.su<b.su) {
		return false;
	} else { //相等
		if(a.ch>b.ch) return true;//比较语文
		else if(a.ch<b.ch) return false;
		else { //语文也相等
			if(a.num>b.num) {
				return false;//比较编号
			} else {
				return true;
			}
		}
	}
}	
int main() {
	student stu[300];
	int n;
	cin >> n;
	for (int i = 0; i<n; i++) {
		cin>>stu[i].ch;
		cin>>stu[i].ma;
		cin>>stu[i].en;
		stu[i].su = stu[i].ch + stu[i].ma + stu[i].en;
		stu[i].num = i+1;	
	}
	sort(stu,stu+n,cmp);
	for (int i=0;i<5;i++){
		cout<<stu[i].num<<" ";
		cout<<stu[i].su<<endl;
	}
	return 0;
}