#include <stdio.h>
void print_digit(int S[], int i, int count,int len)
{
    if(i==len){
        printf("%d",count);
        return;
    }
    if(S[i]=='a' || S[i]=='A' || S[i]=='e' || S[i]=='E' || S[i]=='i' || S[i]=='I' || S[i]=='o' || S[i]=='O' || S[i]=='u' || S[i]=='U'){
        count++;
    }
    print_digit(S,i+1,count,len);
}
int main()
{
    char S[201];
    fgets(S,201,stdin);
    int len=strlen(S);
    printf("%d ",len);
    print_digit(S,0,0,len);


    return 0;
}