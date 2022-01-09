#include <iostream>

using namespace std;
int nodes[100][2];

void preorder(int x) {
    // 根左右
    cout << x << " ";

    if (nodes[x][0] != 0)
        preorder(nodes[x][0]);

    if (nodes[x][1] != 0)
        preorder(nodes[x][1]);
}

void inorder(int x) {
    // 左根右
    if (nodes[x][0] != 0)
        inorder(nodes[x][0]);
    cout << x << " ";
    if (nodes[x][1] != 0)
        inorder(nodes[x][1]);
}

void postorder(int x) {
    // 左右根
    if (nodes[x][0] != 0)
        postorder(nodes[x][0]);
    if (nodes[x][1] != 0)
        postorder(nodes[x][1]);
    cout << x << " ";
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> nodes[i][0] >> nodes[i][1];
    }
    preorder(1);
    cout << endl;
    inorder(1);
    cout << endl;
    postorder(1);
    system("pause");
    return 0;
}