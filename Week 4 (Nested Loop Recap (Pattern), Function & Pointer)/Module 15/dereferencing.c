#include <stdio.h>
int main()
{
    int x=10;
    printf("%d\n",x);
    printf("Address of x %p\n",&x);

    int* ptr;
    ptr = &x;
    printf("Address of x %p\n",ptr);
    printf("Address of ptr %p\n",&ptr);
    *ptr = 200;
    printf("Address of x %d\n",*ptr);
    printf("Address of x %d\n",x);


    return 0;
}