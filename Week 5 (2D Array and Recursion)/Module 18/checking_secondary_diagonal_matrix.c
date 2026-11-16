#include <stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(a[i][j]==0 && i+j!=n-1){
                count++;
            }
        }
    }
    if(count==n*n-n){
        printf("This is a secondary diagonal Matrix");
    }
    else{
        printf("This is not a secondary diagonal Matrix");
    }

    return 0;
}