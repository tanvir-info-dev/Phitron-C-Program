#include <stdio.h>
#include <string.h>
int main()
{
    char F1[100],S1[100],F2[100],S2[100];
    scanf("%s%s%s%s",&F1,&S1,&F2,&S2);
    int cmp=strcmp(S1,S2);
    if(cmp==0)
    printf("ARE Brothers");
    else
    printf("NOT");

    return 0;
}