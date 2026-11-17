#include <stdio.h>
int main()
{
    int w,flag=0;
    scanf("%d",&w);
    for(int i=2 ; i<=w ; i+=2){
        for(int j=2 ; j<=w ; j+=2){
            if(i+j==w){
                flag++;
            }
        }
    }
    if(flag==0){
        printf("NO");
    }
    else{
        printf("YES");
    }

    return 0;
}