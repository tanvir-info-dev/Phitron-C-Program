#include <stdio.h>
int fun(int x, int y)
{
    int sum=x+y;
    return sum;
}
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    int ans = fun(X,Y);
    printf("%d",ans);

    return 0;
}