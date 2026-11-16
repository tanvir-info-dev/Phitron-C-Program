#include <stdio.h>
int main()
{
    // -------------------- Process 1

    int r,c,count=0;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            if(a[i][j]==0){
                count++;
            }
        }
    }
    if(count==r*c){
        printf("This is a zero Matrix");
    }
    else{
        printf("This is not a zero Matrix");
    }


    // -------------------- Process 2

    // int r,c,flag=0;
    // scanf("%d%d",&r,&c);
    // int a[r][c];
    // for(int i=0 ; i<r ; i++){
    //     for(int j=0 ; j<c ; j++){
    //         scanf("%d",&a[i][j]);
    //     }
    // }
    // for(int i=0 ; i<r ; i++){
    //     for(int j=0 ; j<c ; j++){
    //         if(a[i][j]!=0){
    //             flag=1;
    //             printf("This is not a zero Matrix");
    //             break;
    //         }
    //     }
    //     if(flag==1){
    //         break;
    //     }
    //     if(i==r-1){
    //         printf("This is a zero Matrix");
    //     }
    // }

    return 0;
}