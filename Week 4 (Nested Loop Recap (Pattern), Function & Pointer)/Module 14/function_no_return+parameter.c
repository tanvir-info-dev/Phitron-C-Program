#include <stdio.h>
void sum(int num1, int num2)
{
    int ans=num1+num2;
    // return; ----- Work like the break of loop and will work from the line 12;
    printf("%d",ans);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    sum(a,b);

    return 0;
}