#include <iostream>
#include <vector>

/* 깊이 우선 탐색 (Depth First Search, DFS) */
// 깊은 것을 우선적으로 하여 탐색하는 알고리즘
// 맹목적으로 각 노드를 탐색할 때 사용

using namespace std;

int number = 7;
int c[8];
vector<int> a[8];


void dfs(int x){
    if(c[x]) return;
    c[x] = true;
    cout << x << ' ';
    for(int i=0;i<a[x].size();i++){
        int y=a[x][i];
        dfs(y);
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

    a[3].push_back(6);
    a[6].push_back(3);

    a[3].push_back(7);
    a[7].push_back(3);

    a[4].push_back(5);
    a[5].push_back(4);

    a[6].push_back(7);
    a[7].push_back(6);

    dfs(1);

    return 0;
}
