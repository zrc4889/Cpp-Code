#include <bits/stdc++.h>
using namespace std;
char s[1000000 + 10];
int main()
{
    cin >> s;
    int n = strlen(s);
    long long wow = 0, wo = 0, w = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'v' && (i > 0 && s[i - 1] == 'v'))
        {
            wow += wo;

            w++;
        }
        if (s[i] == 'o')
        {
            wo += w;
            // w++;
        }
    }
    cout << wow << endl;
    return 0;
}