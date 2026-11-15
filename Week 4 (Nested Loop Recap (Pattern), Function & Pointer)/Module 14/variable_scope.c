#include <stdio.h>
int x=10;
int check()
{
    int y=20;
    printf("check -> %d",y);
}
int main()
{
    printf("main -> %d\n",x);
    check();

    return 0;
}