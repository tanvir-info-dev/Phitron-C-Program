#include <stdio.h>
void print_digit(int N)
{
    if(N==0){
        return;
    }
    print_digit(N/10);
    printf("%d ",N%10);
}
int main()
{
    int T,N;
    scanf("%d",&T);
    for(int i=1 ; i<=T ; i++){
        scanf("%d",&N);
        if(N==0){
            printf("0");
        }
        print_digit(N);
        printf("\n");
    }


    return 0;
}


// #include <stdio.h>
// void print_digit(int T, int i)
// {
//     if(i==T){
//         return;
//     }
//     int N,j;
//     scanf("%d",&N);
//     for(j=1 ; ; j++){
//         printf("%d ",N%10);
//         N=N/10;
//         if(N/10==0){
//             printf("%d",N%10);
//             break;
//         }
//     }
//     printf("\n");
//     print_digit(T,i+1);
// }
// int main()
// {
//     int T;
//     scanf("%d",&T);
//     print_digit(T,0);


//     return 0;
// }