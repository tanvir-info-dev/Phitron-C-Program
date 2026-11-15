#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int A[N],i;
    for(i=0 ; i<N ; i++){
        scanf("%d",&A[i]);
    }
    for(i=0 ; i<N ; i++){
        if(A[i]<=10){
            printf("A[%d] = %d\n",i,A[i]);
        }
    }

    return 0;
}