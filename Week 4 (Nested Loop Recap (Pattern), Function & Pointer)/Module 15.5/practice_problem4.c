#include <stdio.h>
void count_odd(int a[] , int n)
{
    for(int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    a[n-1]=100;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    count_odd(a,n);
    for(int i=0 ; i<n ; i++){
        printf("%d ",a[i]);
    }

    return 0;
}