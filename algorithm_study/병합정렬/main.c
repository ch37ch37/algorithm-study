#include <stdio.h>
#include <stdlib.h>

/*  �������� - ��Ȯ�� ������ ������ ���߿� �����ϴ°�(��������) */

int number = 10;
int sorted[10]; // ���� �迭�� ������ ���������� ����(�߰����� �迭)

void merge(int a[],int m,int middle, int n){//m:������,n:����
    int i=m;
    int j=middle+1;
    int k=m;
    int t;
    // ���� ������� �迭�� ����

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
    //���� �����͵� ����
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

    //���ĵ� �迭 ����
    for(t=m;t<=n;t++){
        a[t]=sorted[t];
    }
}
void mergeSort(int a[],int m,int n){
    //ũ�Ⱑ 1���� ū ���
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
