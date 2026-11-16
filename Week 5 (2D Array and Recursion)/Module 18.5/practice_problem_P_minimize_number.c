#include <stdio.h>
int main()
{
    int N,count=0;
    scanf("%d",&N);
    int A[N];
    for(int i=0 ; i<N ; i++){
        scanf("%d",&A[i]);
        if(A[i]%2==0){
            count++;
        }
    }
    int operation=0;
    if(count==N){
        for(int j=1 ; count==N ; j++){
            count=0;
            for(int i=0 ; i<N ; i++){
                A[i]=A[i]/2;
                if(A[i]%2==0){
                    count++;
                }
            }
            operation++;
        }
        printf("%d",operation);
    }
    else{
        printf("0");
    }

    return 0;
}