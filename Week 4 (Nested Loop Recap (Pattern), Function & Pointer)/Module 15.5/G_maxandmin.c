#include <stdio.h>
void fun()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    int mx=a[0];

    int min=a[0];
    for(i=0 ; i<n ; i++){
            if(a[i]>=mx){
            mx=a[i];
        }
        if(a[i]<=min){
            min=a[i];
        }
    }
    printf("%d %d",min,mx);
}
int main()
{
    fun();

    return 0;
}