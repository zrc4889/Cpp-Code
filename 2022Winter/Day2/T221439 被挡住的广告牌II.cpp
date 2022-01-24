#include<cstdio>
using namespace std;
int l1, r1, l2, r2;
int x1, y1, x2, y2;
int sum, a, b, c, d;
int abs(int x)
{
    if(x < 0)
        return -x;
    return x;
}
int main() {
    scanf("%d%d%d%d%d%d%d%d", &l1, &r1, &l2, &r2, &x1, &y1, &x2, &y2);
    if(x1 <= l1 && y1 <= r1 && x2 >= l2 && y2 >= r2)
        printf("%d",0);//0
    else if(x1 > l1 && y1 <= r1 && x2 >= l2 && y2 >= r2 && x1 < l2)
        printf("%d",abs(r2 - r1) * abs(x1 - l1));//up
    else if(y2 < r2 && r2 > r1 && x2 >= l2 && x1 <= l1 && y1 <= r1)
        printf("%d",abs(l2 - l1) * abs(r2 - y2));//left
    else if(x2 > l1 && x2 < l2 && y2 >= r2 && x1 <= l1 && y1 <= r1)
        printf("%d",abs(r2 - r1) * abs(l2 - x2));//down
    else if(y1 < r2 && y1 > r1 && x1 <= l1 && x2 >= l2 && y2 >= r2)
        printf("%d",abs(l2 - l1) * abs(y1 - r1));//right
    else
        printf("%d",abs(l2 - l1) * abs(r2 - r1));//all
}