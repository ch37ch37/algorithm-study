#include <stdio.h>
#include <stdlib.h>

/* ���ͽ�Ʈ��(Dijkstra) �˰��� - ��ǥ���� �ִ� ��� Ž�� �˰��� */
// �ϳ��� �ִ� �Ÿ��� ���� �� �� �������� ���ߴ� �ִ� �Ÿ� ������ �״�� ���

int number = 6;

// ��ü �׷����� �ʱ�ȭ�մϴ�.
int a[6][6] = {
    {0,2,5,1,1000000000,1000000000},
    {2,0,3,2,1000000000,1000000000},
    {5,3,0,3,1,5},
    {1,2,3,0,1,1000000000},
    {1000000000,1000000000,1,1,0,2},
    {1000000000,1000000000,5,1000000000,2,0}
};

int v[6] = {0,0,0,0,0,0}; // �湮�� ���
int d[6]; // �ִ� �Ÿ�

// ���� �ּ� �Ÿ��� ������ ������ ��ȯ�մϴ�.
int getSmallIndex(){
    int min=INF;
    int index=0,i;
    for(i=0;i<number;i++){ // ����Ž�� >> �ð��� �����ɸ�����.
        if(d[i]<min && !v[i]){
            min = d[i];
            index = i;
        }
    }
    return index;
}

// ���ͽ�Ʈ�� �����ϴ� �Լ��Դϴ�.
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
