#include <stdio.h>
#include <stdlib.h>
/*  선택정렬 - 제일 작은 값을 앞으로 보낸다. */
int main()
{
    int i,j,min,index,temp;
    int num[10]={5,15,6,8,99,33,1,4,7,10};

    for(i=0;i<10;i++){
        min=10000;
        for(j=i;j<10;j++){
            if(min>num[j]){
                min=num[j];
                index=j;
            }
        }
        temp=num[i];
        num[i]=num[index];
        num[index]=temp;
    }

    for(i=0;i<10;i++){
        printf("%d ",num[i]);
    }
    return 0;
}
