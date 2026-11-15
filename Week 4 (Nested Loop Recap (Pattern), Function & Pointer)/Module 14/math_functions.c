#include <stdio.h>
#include <math.h>
int main()
{
    double n;
    scanf("%lf",&n);
    int ans=ceil(n);
    printf("ceil -> %d\n",ans);
    ans=floor(n);
    printf("floor -> %d\n",ans);
    ans=round(n);
    printf("round -> %d\n",ans);
    ans=pow(n,2);
    printf("pow -> %d\n",ans);
    double ans2=sqrt(n);
    printf("sqrt -> %lf\n",ans2);
    ans=abs(n);
    printf("abs -> %d\n",ans);

    return 0;
}