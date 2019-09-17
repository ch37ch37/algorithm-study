#include <stdio.h>
#include <stdlib.h>

/* 다이나믹 프로그래밍(DP) - 하나의 문제는 단 한 번만 풀도록 하는 알고리즘 */

int d[100];

int dp(int x){ // x의 값이 커질수록 계산양이 무수히 늘어나서 시간이 오래 걸린다.
    if(x==1) return 1;
    if(x==2) return 1;
    if(d[x]!=0) return d[x]; // 계산을 했던거는 저장해주기
    return d[x] = dp(x-1) + dp(x-2);
}


int main()
{
    printf("%d",dp(30));
    return 0;
}
