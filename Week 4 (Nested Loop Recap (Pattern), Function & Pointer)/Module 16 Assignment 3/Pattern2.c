#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int num=1;
    for(int i=1 ; i<=N ; i++){
        for(int j=1 ; j<=N-i ; j++){
            printf(" ");
        }
        for(int j=num ; j>=1 ; j--){
            printf("%d",j);
        }
        num++;
        printf("\n");
    }

    return 0;
}