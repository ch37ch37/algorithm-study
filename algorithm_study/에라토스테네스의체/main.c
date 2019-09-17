#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 에라토스테네스의체 - 대표적인 소수 판별 알고리즘 */
// 약수들의 대칭성을 이용하여 특정 숫자의 제곱근까지만 약수의 여부를 검증
// 1~2개의 숫자가 아닌 숫자의 집합을 판별할 때 사용
// 시간복잡도 : O(N
                       )

// 기본적인 소수 판별 알고리즘 >> 시간복잡도 : O(n)
int isPrimeNumber(int x){
    int i;
    for(i=2;i<x;i++){
        if(x%i==0) return 0;
    }
    return 1;
}
// 소수판별법
int isPrimeNumber2(int x){
    int end = (int) sqrt(x);
    int i;
    for(i=2;i<=end;i++){
        if(x%i==0) return 0;
    }
    return 1;
}
//에라토스테네스의체
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
