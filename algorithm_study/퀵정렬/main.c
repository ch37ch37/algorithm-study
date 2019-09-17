#include <stdio.h>
#include <stdlib.h>

/*  퀵정렬 - 분할정복을 이용하여 정렬함 */
// 피벗값을 지정하고 그 다음수 부터 피벗값보다 큰값을 찾고
// 끝 값부터 피벗값보다 작은값을 찾는다.
// 엇갈리기전에 값들을 찾으면 서로 바꿔준다.
// 그렇게 진행하다가 값을 못찾으면 피벗값과 바꿔주고 다시 실행

int number = 10;
int data[10] = {1,10,5,8,7,6,4,3,2,9};

void quickSort(int *data, int start,int end){
    if(start>=end){ // 원소가 1개인 경우
        return ;
    }

    int key = start; // 키는 첫번째 원소
    int i = start + 1;
    int j = end;
    int temp;

    while(i<=j){ // 엇갈릴 때 까지 반복
        while(data[i]<=data[key]){// 키 값보다 큰 값을 만날 때 까지 반복
            i++;
        }
        while(data[j]>=data[key] && j>start){// 키 값보다 작은 값을 만날 때 까지 반복
            j--;
        }
        if(i>j){ // 현재 엇갈린 상태면 키 값과 교체
            temp=data[j];
            data[j]=data[key];
            data[key]=temp;
        }else{ // 엇갈리지 않았다면 i와 j를 교체
            temp = data[j];
            data[j] = data[i];
            data[i] = temp;
        }
        show(data);
    }
    quickSort(data,start,j-1);
    quickSort(data,j+1,end);
}
void show(int num[]){
    int i;
    for(i=0;i<number;i++)
        printf("%d ",num[i]);
    printf("\n");
}
int main()
{
    quickSort(data,0,number-1);
    show(data);
    return 0;
}
