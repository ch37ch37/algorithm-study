#include <stdio.h>
#include <stdlib.h>

/*  �������� - ���� �ִ� ���� ���ؼ� ���� ���� ������ ������. */
//  ��ȿ���� �˰���
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
