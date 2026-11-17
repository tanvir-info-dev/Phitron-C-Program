#include <stdio.h>
#include <limits.h>
int main()
{
    int n,k;
    long long int sum=0,mx=INT_MIN;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(a[j]>=a[i]){
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0 ; i<k ; i++){
        sum=sum+a[i];
        if(sum>=mx)
        mx=sum;
    }
    if(mx<0)
    printf("0");
    else
    printf("%lld",mx);

    return 0;
}