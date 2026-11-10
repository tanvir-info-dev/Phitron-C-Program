#include <stdio.h>
#include <string.h>
int main()
{
    int N;
    scanf("%d",&N);
    char S[51],T[51],x[105];
    scanf("%s%s",&S,&T);
    for(int i=0 ; i<51 ; i++){
        if(i%2==0){
            x[i]=S[i];
        }
    }
    printf("%s",x);
    return 0;
}