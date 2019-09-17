#include <iostream>
#include <queue>
#include <vector>

/* �ʺ�켱Ž��(Breadth First Search, BFS) */
// Ž���� �� �� �ʺ� �켱���� �Ͽ� Ž���� �����ϴ� Ž�� �˰���
// '�͸����� Ž��'�� �ϰ��� �� �� ����� �� �ִ� Ž�� ���
// '�ִ� ���'�� ã���شٴ� ������ �ִ� ���̸� �����ؾ� �Ҷ� ���� ���

using namespace std;

int number = 7;
bool c[8]; // �湮�� �ߴٴ� ���� ó���ϱ�����
vector<int> a[8]; //1~7���� index�� ó���ϱ� ���� ũ�⸦ 8�� ����

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
