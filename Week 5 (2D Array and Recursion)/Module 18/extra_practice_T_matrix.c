#include <stdio.h>
int main()
{
    int N,pri_sum=0,sec_sum=0;
    scanf("%d",&N);
    int A[N][N];
    for(int i=0 ; i<N ; i++){
        for(int j=0 ; j<N ; j++){
            scanf("%d",&A[i][j]);
            if(i==j){
                pri_sum=pri_sum+A[i][j];
            }
            if(i+j==N-1){
                sec_sum=sec_sum+A[i][j];
            }
        }
    }
    printf("%d",abs(pri_sum-sec_sum));


    return 0;
}