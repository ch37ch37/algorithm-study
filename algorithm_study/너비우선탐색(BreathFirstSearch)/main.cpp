#include <iostream>
#include <queue>
#include <vector>

/* 너비우선탐색(Breadth First Search, BFS) */
// 탐색을 할 때 너비를 우선으로 하여 탐색을 수행하는 탐색 알고리즘
// '맹목적인 탐색'을 하고자 할 때 사용할 수 있는 탐색 기법
// '최단 경로'를 찾아준다는 점에서 최단 길이를 보장해야 할때 많이 사용

using namespace std;

int number = 7;
bool c[8]; // 방문을 했다는 것을 처리하기위함
vector<int> a[8]; //1~7까지 index를 처리하기 위해 크기를 8로 설정

void bfs(int start){
   queue<int> q;
   q.push(start);
   c[start] = true;
   while(!q.empty()){
        int x = q.front();
        q.pop();
        cout << x << ' ' ;
        for(int i=0;i<a[x].size();i++){
            int y = a[x][i];
            if(!c[y]){
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

    a[3].push_back(6);
    a[6].push_back(3);
    a[3].push_back(7);
    a[7].push_back(3);

    a[4].push_back(5);
    a[5].push_back(4);
    a[6].push_back(7);
    a[7].push_back(6);

    bfs(1);

    cout << endl;

    return 0;
}
