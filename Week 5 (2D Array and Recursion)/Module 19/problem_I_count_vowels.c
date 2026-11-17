#include <stdio.h>
int print_digit(char S[], int i)
{
    if(S[i]=='\0'){
        return 0;
    }
    int count = print_digit(S,i+1);
    if(S[i]=='a' || S[i]=='A' || S[i]=='e' || S[i]=='E' || S[i]=='i' || S[i]=='I' || S[i]=='o' || S[i]=='O' || S[i]=='u' || S[i]=='U'){
        return count+1;
    }
    else{
        return count;
    }
}
int main()
{
    char S[201];
    fgets(S,201,stdin);
    int ans = print_digit(S,0);
    printf("%d",ans);


    return 0;
}