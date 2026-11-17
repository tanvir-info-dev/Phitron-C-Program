#include <stdio.h>
int mx_num(int A[], int N, int i, int mx)
{
    if(i==N){
        return mx;
    }
    if(A[i]>=mx){
        mx=A[i];
    }
    mx = mx_num(A,N,i+1,mx);
    return mx;
} 
int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0 ; i<N ; i++){
        scanf("%d",&A[i]);
    }
    int ans = mx_num(A,N,0,A[0]);
    printf("%d",ans);


    return 0;
}