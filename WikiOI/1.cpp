#include <bits/stdc++.h>
using namespace std;
int n;
int sum = 0;
int main()
{
    std::cin >> n;
    sum += n / 20;
    n %= 20;
    sum += n / 10;
    n %= 10;
    sum += n / 5;
    n %= 5;
    sum += n / 1;
    n %= 1;
    std::cout << sum;
    return 0;
}