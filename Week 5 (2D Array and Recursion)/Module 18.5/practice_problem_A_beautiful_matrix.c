#include <stdio.h>
int main()
{
    int a[5][5];
    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<5 ; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<5 ; j++){
            if(a[i][j]!=0){
                printf("%d",abs(2-i)+abs(2-j));
                break;
            }
        }
    }

    return 0;
}