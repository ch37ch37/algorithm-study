#include <stdio.h>
#include <stdlib.h>
int arr[1000001];

// 백준 2750번 문제
void BJ2750(){
   int n,min,i,j,index,temp;
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n;i++){
        min=1001;
        for(j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                index=j;
            }
        }
        temp = arr[i];
        arr[i]=arr[index];
        arr[index]=temp;
    }

    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
// 백준 2752번 문제
void BJ2752(){
    int min,i,j,index,temp;

    for(i=0;i<3;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<3;i++){
        min=1000001;
        for(j=i;j<3;j++){
            if(arr[j]<min){
                min=arr[j];
                index=j;
            }
        }
        temp = arr[i];
        arr[i]=arr[index];
        arr[index]=temp;
    }

    for(i=0;i<3;i++)
        printf("%d ",arr[i]);
}
// 백준 2751번 문제
void BJ2751(){
    int num,i;

    scanf("%d",&num);

    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }

    quickSort(arr,0,num-1);

    for(i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
}
void quickSort(int *arr,int start,int end){
    if(start>=end){
        return;
    }
    int key = start;
    int i=start+1;
    int j=end;
    int temp;

    while(i<=j){
        while(arr[i]<=arr[key]){
            i++;
        }
        while(arr[j]>=arr[key] && j>start){
            j--;
        }

        if(i>j){
            temp = arr[j];
            arr[j] = arr[key];
            arr[key]=temp;
        }else{
            temp = arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
    quickSort(arr,start,j-1);
    quickSort(arr,j+1,end);
}
int main()
{

    BJ2751();
    return 0;
}
