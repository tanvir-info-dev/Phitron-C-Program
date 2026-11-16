#include <stdio.h>
void print_N_times(int A[] , int N , int i)
{
    if(i==N){
        return;
    }
    print_N_times(A,N,i+1);
    if(i%2==0)
    printf("%d ",A[i]);
}
int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0 ; i<N ; i++){
        scanf("%d",&A[i]);
    }
    print_N_times(A,N,0);

    return 0;
}