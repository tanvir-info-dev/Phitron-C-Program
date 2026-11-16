#include <stdio.h>
void sum_array(int A[],int N,int i, long long int sum)
{
    if(i==N){
        printf("%lld",sum);
        return;
    }
    scanf("%d",&A[i]);
    sum=sum+A[i];
    sum_array(A,N,i+1,sum);
}
int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    sum_array(A,N,0,0);
    

    return 0;
}