#include <stdio.h>
int main()
{
    char a[101],count=0;
    scanf("%s",&a);
    // for(int i=0 ; i<101 ; i++){
    //     if(a[i]=='\0'){
    //         break;
    //     }
    //     count+=1;
    // }
    for (int i=0 ; a[i]!='\0' ; i++){
        count++;
    }
    printf("%d",count);
    return 0;
}