#include <stdio.h>
#include <stdlib.h>

/*  ������ -  */

int number = 9;
int heap[9]={7,6,5,8,3,5,9,1,6};



int main()
{
    int i,c,root,temp;
    //���� ��ü Ʈ�� ������ �ִ� �� ������ �ٲ۴�.
    for(i=1;i<number;i++){
        c=i;
        do{
            int root=(c-1)/2;
            if(heap[root]<heap[c]){
                temp=heap[root];
                heap[root]=heap[c];
                heap[c]=temp;
            }
            c=root;
        }while(c!=0);
    }

    // ũ�⸦ �ٿ����� �ݺ����� ���� ����
    for(i=number-1;i>=0;i--){
        temp = heap[0];
        heap[0]=heap[i];
        heap[i]=temp;
        root = 0;
        do{
            c= 2*root+1;
            // �ڽ��߿� �� ū ���� ã��
            if(heap[c]<heap[c+1] && c<i-1){
                c++;
            }
            // ��Ʈ���� �ڽ��� �� ũ�ٸ� ��ȯ
            if(heap[root] < heap[c] && c<i){
                temp = heap[root];
                heap[root] = heap[c];
                heap[c] = temp;
            }
            root = c;
        }while(c<i);
    }

    for(i=0;i<number;i++){
        printf("%d ",heap[i]);
    }
    return 0;
}
