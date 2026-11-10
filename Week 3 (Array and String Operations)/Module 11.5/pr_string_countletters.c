#include <stdio.h>
int main()
{
    char S[10000000]; //10^7 is allowed in problem but not working here
    scanf("%s",&S);
    int fre[26]={0};
    for(int i=0 ; ; i++){
        if(S[i]=='\0'){
            break;
        }
        int val = S[i]-'a';
        fre[val]++;
    }
    for(int i=0 ; i<26  ; i++){
        if(fre[i]!=0){
            printf("%c : %d\n",i+'a',fre[i]);

        }
    }

    return 0;
}