#include <iostream>
using namespace std;

int main() {
    int s1, s2, s3, ans=3;
    cin >> s1 >> s2 >> s3;
    int a[s1+s2+s3+1] = {0};
    for (int i=1; i<=s1; ++i)
        for (int j=1; j<=s2; ++j)
            for (int k=1; k<=s3; ++k)
                ++a[i+j+k];
    for (int i=4; i<=s1+s2+s3; ++i)
        if (a[ans] < a[i])
            ans = i;
    cout << ans << endl;
    return 0;
}