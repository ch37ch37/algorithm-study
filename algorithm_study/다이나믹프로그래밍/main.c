#include <stdio.h>
#include <stdlib.h>

/* ���̳��� ���α׷���(DP) - �ϳ��� ������ �� �� ���� Ǯ���� �ϴ� �˰��� */

int d[100];

int dp(int x){ // x�� ���� Ŀ������ ������ ������ �þ�� �ð��� ���� �ɸ���.
    if(x==1) return 1;
    if(x==2) return 1;
    if(d[x]!=0) return d[x]; // ����� �ߴ��Ŵ� �������ֱ�
    return d[x] = dp(x-1) + dp(x-2);
}


int main()
{
    printf("%d",dp(30));
    return 0;
}
