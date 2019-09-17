#include <stdio.h>
#include <stdlib.h>

/*  힙정렬 -  */

int number = 9;
int heap[9]={7,6,5,8,3,5,9,1,6};



int main()
{
    int i,c,root,temp;
    //먼저 전체 트리 구조를 최대 힙 구조로 바꾼다.
    for(i=1;i<number;i++){
        c=i;
        do{
            int root=(c-1)/2;
            if(heap[root]<heap[c]){
                temp=heap[root];
                heap[root]=heap[c];
                heap[c]=temp;
            }
            c=root;
        }while(c!=0);
    }

    // 크기를 줄여가며 반복적을 힙을 구성
    for(i=number-1;i>=0;i--){
        temp = heap[0];
        heap[0]=heap[i];
        heap[i]=temp;
        root = 0;
        do{
            c= 2*root+1;
            // 자식중에 더 큰 값을 찾기
            if(heap[c]<heap[c+1] && c<i-1){
                c++;
            }
            // 루트보다 자식이 더 크다면 교환
            if(heap[root] < heap[c] && c<i){
                temp = heap[root];
                heap[root] = heap[c];
                heap[c] = temp;
            }
            root = c;
        }while(c<i);
    }

    for(i=0;i<number;i++){
        printf("%d ",heap[i]);
    }
    return 0;
}
