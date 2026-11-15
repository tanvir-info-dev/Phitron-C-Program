#include <stdio.h>
void fun(int n)
{
    int i;
    for(i=1 ; i<n ; i++){
        printf("%d ",i);
    }
    printf("%d",n);
}
int main()
{
    int N;
    scanf("%d",&N);
    fun(N);

    return 0;
}