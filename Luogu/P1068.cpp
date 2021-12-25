#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int n, m;//n表示报名参加笔试的选手总数，m表示计划录取的志愿者人数

struct stu {
	int k;
	int s;
} p[9999];

bool cmp(stu a, stu b) {//按照笔试成绩从高到低输出，如果成绩相同，则按报名号由小到大的顺序输出。
	if (a.s > b.s) {
		return 1;//按照笔试成绩从高到低输出 
	} else if (a.s == b.s) {//如果成绩相同，
		if (a.k < b.k) {
			return 1;//则按报名号由小到大的顺序输出。 
		} else {
			return 0;
		}
	} else return 0;
}

int main() {
	cin >> n >> m;
	for (int i=0; i<n; i++) {
		cin>>p[i].k>>p[i].s;
	}
	sort(p, p+n, cmp);
	int a = floor(m * 1.5);
	int scoreLine = p[a-1].s;

	cout<<scoreLine<<" ";
	int cnt=0;
	for (int i=0; i<n; i++) {
		if (p[i].s >= scoreLine) {
			cnt = cnt + 1;
		}

	}
	cout<<cnt<<endl;
	for (int i=0; i<n; i++) {
		if (p[i].s >= scoreLine) {
			cout<<p[i].k;
			cout<<" "<<p[i].s<<endl;
		}else{
			break;
		}

	}
	return 0;
}