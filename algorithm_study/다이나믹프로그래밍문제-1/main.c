#include <stdio.h>
#include <stdlib.h>

/* ���� 11726�� ���� : 2*n Ÿ�ϸ� */
// D(n) = D(n-1) + D(n-2)

int d[1001];

int dp(int x){
    if(x==1) return 1;
    if(x==2) return 2;
    if(d[x]!=0) return d[x];
    return d[x] = (dp(x-1) + dp(x-2))%10007;
}

int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",dp(num));
    return 0;
}
