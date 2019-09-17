#include <stdio.h>
#include <stdlib.h>

/*  삽입정렬 - 각 숫자를 적잘한 위치에 삽입하는 방법   */

int main()
{

    int i,j,tmp;
    int num[10]={1,10,5,8,7,6,4,3,2,9};

    for(i=0;i<9;i++){
        for(j=i;j>0&&num[j]>num[j+1];j--){
            tmp = num[j];
            num[j]=num[j+1];
            num[j+1]=tmp;
        }
    }
    for(i=0;i<10;i++){
        printf("%d ",num[i]);
    }

    /*
    int i,j,tmp;
    int arr[10]={};

    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        for(j=i;j>0 && arr[j-1]>arr[j];j--){
            tmp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=tmp;
        }

        for(j=0;j<=i;j++){
            printf("%d ",arr[j]);
        }
        printf("\n");
    }
    */
    return 0;
}
