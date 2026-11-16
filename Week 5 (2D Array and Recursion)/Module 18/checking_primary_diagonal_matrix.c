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
            if(a[i][j]==0 && i!=j){
                count++;
            }
        }
    }
    if(count==n*n-n){
        printf("This is a primary diagonal Matrix");
    }
    else{
        printf("This is not a primary diagonal Matrix");
    }

    return 0;
}