#include <stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    int i=0,j=n-1;
    // ------------ Process 1
    while(i<=j){
        printf("%d ",a[i]);
        i++;
        if(i<j){
            printf("%d ",a[j]);
            j--;
        }
    }
    // ----------- Process 2
    // while(i<=j){
    //     if(count%2==0){
    //         printf("%d ",a[i]);
    //         i++;
    //         count++;
    //     }
    //     else{
    //         printf("%d ",a[j]);
    //         j--;
    //         count++;
    //     }
    // }

    return 0;
}