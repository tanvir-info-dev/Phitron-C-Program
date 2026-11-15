#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0 ; i<N ;i++){
        scanf("%d",&A[i]);
    }
    int mx=A[0];
    for(int i=0 ; i<N ;i++){
        if(mx<=A[i]){
            mx=A[i];
        }
    }
    int min=A[0];
    for(int i=0 ; i<N ;i++){
        if(min>=A[i]){
            min=A[i];
        }
    }
    printf("%d %d",min,mx);
    
    return 0;
}