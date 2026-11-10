#include <stdio.h>
int main()
{
    char a[101],b[101];
    scanf("%s%s",&a,&b);
    int lena=strlen(a);
    int lenb=strlen(b);
    for(int i=0 ; i<=lenb ; i++){
        a[lena+i]=b[i];
    }
    printf("%s %s",a,b);

    return 0;
}