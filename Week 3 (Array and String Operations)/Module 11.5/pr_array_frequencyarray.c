#include <stdio.h>
int main()
{
    int N,M;
    scanf("%d%d",&N,&M);
    int A[N];
    for(int i=0 ; i<N ; i++){
        scanf("%d",&A[i]);
    }
    int fre[100001]={0};
    for(int i=0 ; i<N ; i++){
        fre[A[i]]++;
    }
    for(int i=1 ; i<=M ; i++){
        printf("%d\n",fre[i]);
    }

    return 0;
}