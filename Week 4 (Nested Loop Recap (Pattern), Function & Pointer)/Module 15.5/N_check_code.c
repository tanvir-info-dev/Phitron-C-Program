#include <stdio.h>
int main()
{
    int A,B;
    char S='-';
    char s[1000000];
    scanf("%d %d",&A,&B);
    scanf("%s",&s);
    if(s[A]==S){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}