#include <stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    for(int i=0 ; i<5 ; i++){
        printf("%p\n",&a[i]);
    }
    printf("%p\n",a);
    printf("%d\n",*a);
    *a = 100;
    *(a+1) = 200;
    *(a+2) = 300;
    *(a+3) = 400;
    *(a+4) = 500;
    for(int i=0 ; i<5 ; i++){
        printf("%d ",a[i]);
    }

    return 0;
}