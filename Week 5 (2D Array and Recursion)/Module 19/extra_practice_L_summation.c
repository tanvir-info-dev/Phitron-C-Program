#include <stdio.h>
int sum_num(int A[], int N, int i, int sum)
{
    if(i==N){
        return sum;
    }
    sum=sum+A[i];
    sum = sum_num(A,N,i+1,sum);
    return sum;
} 
int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0 ; i<N ; i++){
        scanf("%d",&A[i]);
    }
    int ans = sum_num(A,N,0,0);
    printf("%d",ans);


    return 0;
}