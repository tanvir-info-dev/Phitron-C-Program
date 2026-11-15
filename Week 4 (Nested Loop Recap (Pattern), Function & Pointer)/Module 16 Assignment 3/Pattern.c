#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int symbol=1,count=1;
    for(int i=1 ; i<=N ; i++){
        for(int j=1 ; j<=N-i ; j++){
            printf(" ");
        }
        for(int j=1 ; j<=symbol ; j++){
            if(count%2==0){
                printf("-");
            }
            else{
                printf("#");
            }
        }
        count++;
        symbol+=2;
        printf("\n");
    }
    symbol=2*N-3;
    for(int i=1 ; i<=N ; i++){
        for(int j=1 ; j<=i ; j++){
            printf(" ");
        }
        for(int j=1 ; j<=symbol ; j++){
            if(count%2==0){
                printf("-");
            }
            else{
                printf("#");
            }
        }
        count++;
        symbol-=2;
        printf("\n");
    }

    return 0;
}