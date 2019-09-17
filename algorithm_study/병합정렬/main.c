#include <stdio.h>
#include <stdlib.h>

/*  병합정렬 - 정확히 반으로 나누고 나중에 정렬하는것(분할정복) */

int number = 10;
int sorted[10]; // 정렬 배열을 무조건 전역변수로 선언(추가적인 배열)

void merge(int a[],int m,int middle, int n){//m:시작점,n:끝점
    int i=m;
    int j=middle+1;
    int k=m;
    int t;
    // 작은 순서대로 배열에 삽입

    while(i<= middle || j<=n){
        if(i>middle){
            sorted[k]=a[j];
            j++;
        }else if(j>n){
            sorted[k]=a[i];
            i++;
        }else if(a[i]<=a[j]){
            sorted[k]=a[i];
            i++;
        }else{
            sorted[k]=a[j];
            j++;
        }
        k++;
    }
    //남은 데이터도 삽입
    /*if(i>middle){
        for(t=j;t<=n;t++){
            sorted[k]=a[t];
            k++;
        }
    }else{
        for(t=i;i<=middle;t++){
            sorted[k]=a[t];
            k++;
        }
    }*/

    //정렬된 배열 삽입
    for(t=m;t<=n;t++){
        a[t]=sorted[t];
    }
}
void mergeSort(int a[],int m,int n){
    //크기가 1보다 큰 경우
    if(m<n){
        int middle = (m+n)/2;
        mergeSort(a,m,middle);
        mergeSort(a,middle+1,n);
        merge(a,m,middle,n);
    }
}

int main()
{
    int arr[10]={7,6,5,8,3,5,9,1,85,64};
    int i;
    mergeSort(arr,0,number-1);

    for(i=0;i<number;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
