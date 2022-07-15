#include <bits/stdc++.h>
using namespace std;
int main()
{
    const char haystack[20] = "NOOBfuck";
    const char needle[10] = "NOOB";
    char *ret;
    bool fuck;
    fuck = strstr(haystack, needle) == haystack;
    cout << fuck;
    // printf("子字符串是： %s\n", ret);

    return (0);
}