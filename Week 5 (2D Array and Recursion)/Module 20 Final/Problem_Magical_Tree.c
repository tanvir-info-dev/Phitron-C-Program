#include <stdio.h>
int main()
{
    int N,count=0;
    scanf("%d",&N);
    for(int i=1 ; i<=N ; i+=2){
        count++;
    }
    int star=1;
    for(int i=1 ; i<=5+count ; i++){
        for(int j=1 ; j<=5+count-i ; j++){
            printf(" ");
        }
        for(int j=1 ; j<=star ; j++){
            printf("*");
        }
        star+=2;
        printf("\n");
    }
    for(int i=1 ; i<=5 ; i++){
        for(int j=1 ; j<=5 ; j++){
            printf(" ");
        }
        for(int j=1 ; j<=N ; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}