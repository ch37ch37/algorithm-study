#include <stdio.h>
#include <stdlib.h>

/* 백준 2133번 문제 : 타일 채우기 */
// D(n) = 3*D(n-2)+(2*D(n-4)+2*D(n-6)+2*D(n-8)+... + 2*D(0))

int d[1001];

int dp(int x){
    if(x==0) return 1;
    if(x==1) return 0;
    if(x==2) return 3;
    if(d[x]!=0) return d[x];
    int i,result = 3*dp(x-2);
    for(i=3;i<=x;i++){
        if(i%2==0){
            result += 2*dp(x-i);
        }
    }
    return d[x]=result;

}
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",dp(num));
    return 0;
}
