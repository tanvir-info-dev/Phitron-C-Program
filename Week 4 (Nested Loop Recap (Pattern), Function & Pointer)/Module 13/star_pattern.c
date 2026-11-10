#include <stdio.h>
int main()
{
    // -------- Phitron Process
    int n,star=1;
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=star ; j++){
            printf("*");
        }
        printf("\n");
        star++;
    }

    // ---------- My process 
    // int n;
    // scanf("%d",&n);
    // for(int i=1 ; i<=n ; i++){
    //     for(int j=1 ; j<=i ; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    return 0;
}