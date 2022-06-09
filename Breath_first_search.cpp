#include <iostream>
#include <queue>
#include <vector>
using namespace std;
//너비 우선 탐색은 탐색을 할 때 너비를 우선으로 하여 탐색을 수행하는 탐색 알고리즘
int c[7];
vector<int> a[8];

void bfs(int start) {
    queue<int> q;
    q.push(start);
    c[start] = true;
    while(!q.empty()) {
        int x = q.front();
        q.pop();
        cout << x << " ";
        for (int i = 0; i < a[x].size(); i++) {
            int y = a[x][i];
            if (!c[y]) {
                q.push(y);
                c[y] = true;
            }
        }
    }
}

int main()
{
    a[1].push_back(2);
    a[2].push_back(1);

    a[1].push_back(3);
    a[3].push_back(1);

    a[2].push_back(3);
    a[3].push_back(2);

    a[2].push_back(4);
    a[4].push_back(2);

    a[2].push_back(5);
    a[5].push_back(2);
   
    bfs(1);

    return 0;
}