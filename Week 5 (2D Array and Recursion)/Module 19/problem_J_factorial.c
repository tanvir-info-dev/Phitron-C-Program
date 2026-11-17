#include <stdio.h>
long long int fac(int N)
{
    if(N==1){
        return 1;
    }
    long long int ans = fac(N-1);
    return ans*N;
}
int main()
{
    int N;
    scanf("%d",&N);
    long long int ans = fac(N);
    printf("%lld",ans);

    return 0;
}