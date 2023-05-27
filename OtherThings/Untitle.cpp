#include <bits/stdc++.h>
using namespace std;

deque<int> q;

int main()
{
    // start here..

    q.push_back(114514);
    q.push_back(1423);
    q.push_back(112);
    
    for (auto p : q)
    {
        cout << p << ' ';
    }

    if (q.empty()) cout << "Empty" << endl;
    else cout << "Nope" << endl;

    q.clear();

    if (q.empty()) cout << "Empty" << endl;
    else cout << "Nope" << endl;    

    return 0;
}