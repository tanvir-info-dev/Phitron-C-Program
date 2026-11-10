#include <stdio.h>
int main()
{
    // -------- Phitron Process
    int n;
    scanf("%d",&n);
    int star=n;
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=star ; j++){
            printf("*");
        }
        printf("\n");
        star--;
    }

    // ---------- My process 
    // int n;
    // scanf("%d",&n);
    // for(int i=1 ; i<=n ; i++){
    //     for(int j=n ; j>=i ; j--){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    return 0;
}