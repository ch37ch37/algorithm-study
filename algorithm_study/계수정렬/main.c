#include <stdio.h>
#include <stdlib.h>

/*  ������� - ���������� �ִ� ��쿡 ���ؼ� ���� �˰��� */
// ũ�⸦ �������� ������ ���� ���? (ũ�Ⱑ ������)

int main()
{
    int temp,i,j;
    int count[5]={0};
    int arr[]={1,1,1,1,5,4,2,3,1,5,4,1,2,1,2,3,5,1,4,3,2,3,4,5,1,2,3,5,4};

    for(i=0;i<sizeof(arr)/sizeof(int);i++){
        count[arr[i]-1]++;
    }

    for(i=0;i<5;i++){
        if(count[i]!=0){
            for(j=0;j<count[i];j++){
                printf("%d ",i+1);
            }
        }
    }

    return 0;
}
