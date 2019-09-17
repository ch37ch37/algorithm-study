#include <stdio.h>
#include <stdlib.h>

/*  버블정렬 - 옆에 있는 값과 비교해서 작은 값을 앞으로 보낸다. */
//  비효율적 알고리즘
int main()
{
    int num[10]={1,10,5,8,7,6,4,3,2,9};
    int i,j,emt;
    for(i=0;i<10  ;i++){
        for(j=0;j<9-i;j++){
            if(num[j]>num[j+1]){
                emt=num[j];
                num[j]=num[j+1];
                num[j+1]=emt;
            }
        }
    }
    for(i=0;i<10;i++){
        printf("%d ",num[i]);
    }
    return 0;
}
