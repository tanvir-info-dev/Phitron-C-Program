#include <stdio.h>
int is_palindrome(char S[])
{
    int len=strlen(S),flag;
    for(int i=0,j=len-1 ; i<len,j>=0 ; i++,j--){
        if(i>=j){
            flag=1;
            break;
        }
        else if(S[i]==S[j]){
            continue;
        }
        else{
            flag=0;
            break;
        }
    }
    
    return flag;
}
int main()
{
    char S[1001];
    scanf("%s",&S);
    int ans = is_palindrome(S);
    if(ans==1){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }

    return 0;
}