#include <stdio.h>
#include <string.h>
int main()
{
    char S[10000001];
    scanf("%s",&S);
    int fre[1001]={0},len=strlen(S),a;
    for(int i=0 ; i<len ; i++){
        int val = S[i];
        fre[val]++;
    }
    for(int i=0 ; i<1001 ; i++){
        if(fre[i]!=0){
            printf("%c : %d",i,fre[i]);
        }
    }

    return 0;
}