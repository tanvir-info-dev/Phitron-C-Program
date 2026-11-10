#include <stdio.h>
#include <string.h>
int main()
{
    char a[1001];
    int x=1;
    scanf("%s",&a);
    int len=strlen(a);
    for(int i=0,j=len-1 ; i<j ; i++,j--){
        if(a[i]!=a[j]){
            printf("NO");
            x=0;
            break;
        }
    }
    if(x!=0){
        printf("YES");
    }

    return 0;
}