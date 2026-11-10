#include <stdio.h>
int main()
{
    int count=0;
    char S[100000];
    scanf("%s",&S);
    for(int i=0 ; S[i]!='\0' ; i++){
        if(S[i]!='a' && S[i]!='e' && S[i]!='i' && S[i]!='o' && S[i]!='u'){
            count+=1;
        }
    }
    printf("%d",count);

    return 0;
}