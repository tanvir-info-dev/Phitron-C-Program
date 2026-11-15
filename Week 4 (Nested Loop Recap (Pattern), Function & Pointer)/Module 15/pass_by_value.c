#include <stdio.h>
void fun(int x)
{
    x=20;
    printf("%d\n",x);
    printf("%p\n",&x);
    
}
int main()
{
    int x=10;
    printf("%d\n",x);
    printf("%p\n",&x);
    fun(x);

    return 0;
}