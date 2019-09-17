#include <stdio.h>
#include <stdlib.h>

/*  계수정렬 - 범위조건이 있는 경우에 한해서 빠른 알고리즘 */
// 크기를 기준으로 갯수를 세면 어떨까? (크기가 제한적)

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
