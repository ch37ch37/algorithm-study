#include <stdlib.h>
#include <stdio.h>
// ���� 10989��

int n;
int a[10001]={0};

int  main(){
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        a[x-1]++;
    }

    for(i=0;i<10001;i++){
        if(a[i]!=0){
            for(j=0;j<a[i];j++){
                printf("%d\n",i+1);
            }
        }

    }


    return 0;
}
