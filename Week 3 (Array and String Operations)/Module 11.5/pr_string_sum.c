#include <stdio.h>
int main()
{
    int N,sum=0;
    scanf("%d",&N);
    char a[N+1];
    scanf("%s",&a);
    for(int i=0 ; i<N ; i++){
        sum=sum+(a[i]-48);
    }
    printf("%d",sum);

    return 0;
}