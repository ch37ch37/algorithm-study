#include <stdio.h>
#include <stdlib.h>

/* 다익스트라(Dijkstra) 알고리즘 - 대표적인 최단 경로 탐색 알고리즘 */
// 하나의 최단 거리를 구할 때 그 이전까지 구했던 최단 거리 정보를 그대로 사용

int number = 6;

// 전체 그래프를 초기화합니다.
int a[6][6] = {
    {0,2,5,1,1000000000,1000000000},
    {2,0,3,2,1000000000,1000000000},
    {5,3,0,3,1,5},
    {1,2,3,0,1,1000000000},
    {1000000000,1000000000,1,1,0,2},
    {1000000000,1000000000,5,1000000000,2,0}
};

int v[6] = {0,0,0,0,0,0}; // 방문한 노드
int d[6]; // 최단 거리

// 가장 최소 거리를 가지는 정점을 반환합니다.
int getSmallIndex(){
    int min=INF;
    int index=0,i;
    for(i=0;i<number;i++){ // 선형탐색 >> 시간이 오래걸리게함.
        if(d[i]<min && !v[i]){
            min = d[i];
            index = i;
        }
    }
    return index;
}

// 다익스트라를 수행하는 함수입니다.
void dijkstra(int start){
    int i,j;
    for(i=0;i<number;i++){
        d[i] = a[start][i];
    }
    v[start] =1;
    for(i=0; i<number-2;i++){
        int current = getSmallIndex();
        v[current] = 1;
        for(j=0;j<number;j++){
            if(!v[j]){
                if(d[current] + a[current][j] < d[j]){
                    d[j] = d[current] + a[current][j];
                }
            }
        }
    }
}

int main()
{
    int i;
    dijkstra(0);
    for(i=0;i<number;i++){
        printf("%d ",d[i]);
    }
    return 0;
}
