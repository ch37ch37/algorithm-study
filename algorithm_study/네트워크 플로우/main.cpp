#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define MAX 100
#define INF 100000000
// ��Ʈ��ũ �÷ο� : Ư���� �������� �ٸ� �������� �����Ͱ� �󸶳� ���� �帣�� �ִ°��� �����ϴ� �˰���
using namespace std;

int n=6,result;
int c[MAX][MAX], f[MAX][MAX], d[MAX];
vector<int> a[MAX];

void maxFlow(int start,int en){
        while(1){
            fill(d,d+MAX,-1);
            queue<int> q;
            q.push(start);
            while(!q.empty()){
                int x = q.front();
                q.pop();
                for(int i=0;i<a[x].size();i++){
                    int y = a[x][i];
                    if(c[x][y] - f[x][y] > 0 && d[y] == -1){
                        q.push(y);
                        d[y] = x;//��α��
                        if(y==en) break;
                    }
                }
            }
            if(d[en]==-1 ) break;
            int flow = INF;
            for(int i=en;i!=start;i=d[i]){
                flow = min(flow,c[d[i]][i] - f[d[i]][i]);
            }
            for(int i=en;i!=start;i=d[i]){

                f[d[i]][i] +=flow;
                f[i][d[i]] -= flow;
            }
            result +=flow;
        }


}

int main()
{

    return 0;
}
