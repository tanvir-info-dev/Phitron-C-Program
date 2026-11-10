#include <stdio.h>
int main()
{
    int T,countA=0,counta=0,count=0;
    char S[10001];
    scanf("%d",&T);
    for(int i=0 ; i<T ; i++){
        scanf("%s",&S);
        for(int j=0 ; j<10001 ; j++){
            if(S[j]=='\0'){
                break;
            }
            else if(S[j]>=65 && S[j]<=90){
                countA+=1;
            }
            else if(S[j]>=97 && S[j]<=122){
                counta+=1;
            }
            else{
                count+=1;
            }
        }
        printf("%d %d %d\n",countA,counta,count);
        countA=0;
        counta=0;
        count=0;
    }

    return 0;
}