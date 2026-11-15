#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int star=1;
    for(int i=1 ; i<=N ;i++){
        for(int j=1 ; j<=N-i ;j++){
            printf(" ");
        }
        for(int j=1 ; j<=star ;j++){
            printf("*");
        }
        star+=2;
        printf("\n");
    }
    star=2*N-1;
    for(int i=1 ; i<=N ;i++){
        for(int j=1 ; j<=i-1 ;j++){
            printf(" ");
        }
        for(int j=1 ; j<=star ;j++){
            printf("*");
        }
        star-=2;
        printf("\n");
    }

    return 0;
}