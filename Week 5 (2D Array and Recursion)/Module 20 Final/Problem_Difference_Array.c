#include <stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1 ; i<=T ; i++){
        int N;
        scanf("%d",&N);
        int A[N],B[N],C[N];
        for(int j=0 ; j<N ; j++){
            scanf("%d",&A[j]);
            B[j]=A[j];
        }
        for(int j=0 ; j<N-1 ; j++){
            for(int k=j+1 ; k<N ; k++){
                if(B[j]>=B[k]){
                    int temp;
                    temp=B[j];
                    B[j]=B[k];
                    B[k]=temp;
                }
            }
        }
        for(int j=0 ; j<N ; j++){
            C[j]=abs(A[j]-B[j]);
        }

        for(int j=0 ; j<N ; j++){
            printf("%d ",C[j]);
        }
        printf("\n");
    }

    return 0;
}