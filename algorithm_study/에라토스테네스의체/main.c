#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* �����佺�׳׽���ü - ��ǥ���� �Ҽ� �Ǻ� �˰��� */
// ������� ��Ī���� �̿��Ͽ� Ư�� ������ �����ٱ����� ����� ���θ� ����
// 1~2���� ���ڰ� �ƴ� ������ ������ �Ǻ��� �� ���
// �ð����⵵ : O(N
                       )

// �⺻���� �Ҽ� �Ǻ� �˰��� >> �ð����⵵ : O(n)
int isPrimeNumber(int x){
    int i;
    for(i=2;i<x;i++){
        if(x%i==0) return 0;
    }
    return 1;
}
// �Ҽ��Ǻ���
int isPrimeNumber2(int x){
    int end = (int) sqrt(x);
    int i;
    for(i=2;i<=end;i++){
        if(x%i==0) return 0;
    }
    return 1;
}
//�����佺�׳׽���ü
int number = 100000;
int a[100001];
void primeNumberSieve(){
    int i,j;
    for(i=2;i<=number;i++){
        a[i]=i;
    }
    for(i=2;i<=number;i++){
        if(a[i]==0) continue;
        for(j=i+i;j<=number;j+=i){
            a[j]=0;
        }
    }
    for(i=2;i<=number;i++){
        if(a[i] != 0) printf("%d ",a[i]);
    }
}

int main()
{
    primeNumberSieve();
    return 0;
}
