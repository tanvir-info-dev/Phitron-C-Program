#include <stdio.h>
int main()
{
    int N,M,X;
    scanf("%d%d",&N,&M);
    int A[N][M];
    for(int i=0 ; i<N ; i++){
        for(int j=0 ; j<M ; j++){
            scanf("%d",&A[i][j]);
        }
    }
    scanf("%d",&X);
    for(int i=0 ; i<N ; i++){
        for(int j=0 ; j<M ; j++){
            if(A[i][j]==X){
                printf("will not take number");
                i=N;
                break;
            }
        }
        if(i==N-1){
            printf("will take number");
        }
    }

    return 0;
}