#include <stdio.h>
int main()
{
    // -------- Phitron Process
    int n,star=1;
    scanf("%d",&n);
    int space=n-1;
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=space ; j++){
            printf(" ");
        }
        for(int j=1 ; j<=star ; j++){
            printf("*");
        }
        printf("\n");
        star+=2;
        space--;
    }
    
    // ---------- My process 
    // int n,star=1;
    // scanf("%d",&n);
    // for(int i=1 ; i<=n ; i++){
    //     for(int j=1 ; j<=n-i ; j++){
    //         printf(" ");
    //     }
    //     for(int j=1 ; j<=star ; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    //     star+=2;
    // }

    return 0;
}