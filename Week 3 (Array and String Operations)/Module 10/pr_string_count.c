#include <stdio.h>
int main()
{
    char a[1001];
    scanf("%s",a);
    int sum=0,len=strlen(a);
    for(int i=0 ; i<len ; i++){
        sum=sum+(a[i]-'0');
    }
    // for(int i=0 ; a[i] != '\0' ; i++){
    //     sum=sum+(a[i]-'0');
    // }
    printf("%d",sum);

    return 0;
}





