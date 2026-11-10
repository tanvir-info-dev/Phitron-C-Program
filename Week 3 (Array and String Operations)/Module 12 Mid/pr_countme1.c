#include <stdio.h>
int main()
{
    int N,counta=0,countb=0;
    scanf("%d",&N);
    int A[N];
    for(int i=0 ; i<N ; i++){
        scanf("%d",&A[i]);
    }
    for(int i=0 ; i<N ; i++){
        if(A[i]%2==0){
            counta=counta+1;
        }
        else if(A[i]%2==0 && A[i]%3==0){
            counta=counta+1;
        }
        else if(A[i]%3==0){
            countb=countb+1;
        }
    }
    printf("%d %d",counta,countb);

    return 0;
}