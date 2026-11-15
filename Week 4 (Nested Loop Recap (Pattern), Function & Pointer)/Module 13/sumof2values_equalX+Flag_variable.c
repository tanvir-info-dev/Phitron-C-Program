#include <stdio.h>
int main()
{
    // ----------- Phitron Process
    int n,X,flag=0;
    scanf("%d%d",&n,&X);
    int a[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(a[i]+a[j]==X){
                flag=1;
                printf("YES\n%d %d",a[i],a[j]);
            }
        }
    }
    if(flag==0){
        printf("NO");
    }
    
    


    // -------------- My Process
    // int n,X;
    // scanf("%d%d",&n,&X);
    // int a[n];
    // for(int i=0 ; i<n ; i++){
    //     scanf("%d",&a[i]);
    // }
    // for(int i=0 ; i<n-1 ; i++){
    //     for(int j=i+1 ; j<n ; j++){
    //         if(a[i]+a[j]==X){
    //             printf("%d %d",a[i],a[j]);
    //             i=n;
    //             break;
    //         }
    //         else if(i==n-2 && j==n-1){
    //             printf("Not Found");
    //         }
    //     }
    // }

    return 0;
}