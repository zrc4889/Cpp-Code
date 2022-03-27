#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int x, y;
};
int d[4][2] = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}}; // 每个位置向四方拓展
int level[20][20];                                // 可以通过几步走到
char a[20][20];                                   // 题目说16设20
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                // 模板
                // Node 为节点的结构体
                cin >> a[i][j];
                level[i][j] = -1;
            }
        }
        queue<Node> q;
        Node node;
        node.x = node.y = 1;
        level[1][1] = 0;
        q.push(node);

        while (!q.empty())
        {
            Node node = q.front();
            q.pop();
            int x = node.x;
            int y = node.y;
            for (int i = 0; i < 4; ++i)
            {
                Node new_node;
                new_node.x = x + d[i][0];
                new_node.y = y + d[i][1];
                if (new_node.x < 1 || new_node.x > n || new_node.y < 1 || new_node.y > n)
                    continue; // 下标越界
                
                if (level[new_node.x][new_node.y] != -1 || a[new_node.x][new_node.y] == '#')
                
                    continue; // 是一堵墙或走过了
                
                level[new_node.x][new_node.y] = level[x][y] + 1; // 可以走到，加一
                q.push(new_node);
            }
        }
        if (level[n][n] != -1)
        {
            // 判断终点
            cout << "YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }
    return 0;
}