#include <stdio.h>
int main()
{
    int n,count0=0,countd=0;
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
                count0++;
            }
            if(a[i][j]==1 && i==j){
                countd++;
            }
        }
    }
    if(count0==n*n-n && countd==n){
        printf("This is a Unit Matrix");
    }
    else{
        printf("This is not a Unit Matrix");
    }

    return 0;
}