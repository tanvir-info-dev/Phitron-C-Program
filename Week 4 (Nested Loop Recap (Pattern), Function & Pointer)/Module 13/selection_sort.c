#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(a[i]>a[j]){
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        printf("%d ",a[i]);
    }






    // --------- My Process
    // int n;
    // scanf("%d",&n);
    // int a[n],b[1001]={0};
    // for(int i=0 ; i<n ; i++){
    //     scanf("%d",&a[i]);
    // }
    // for(int i=0 ; i<1001 ; i++){
    //     b[a[i]]=a[i];
    // }
    // for(int i=0 ; i<1001 ; i++){
    //     if(b[i]!=0)
    //     printf("%d ",b[i]);
    // }
    // printf("\n");
    // for(int i=1001 ; i>=0 ; i--){
    //     if(b[i]!=0)
    //     printf("%d ",b[i]);
    // }


    return 0;
}