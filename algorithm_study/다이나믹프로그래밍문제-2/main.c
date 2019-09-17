#include <stdio.h>
#include <stdlib.h>

/* ���� 11727�� : 2*n Ÿ�ϸ� 2 */
// D(n) = D(n-1) + 2*D(n-2)

int d[1001];

int dp(int x){
    if(x==1) return 1;
    if(x==2) return 3;
    if(d[x]!=0) return d[x];
    return d[x] = (dp(x-1) + 2*dp(x-2))%10007;
}

int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",dp(num));
    return 0;
}
