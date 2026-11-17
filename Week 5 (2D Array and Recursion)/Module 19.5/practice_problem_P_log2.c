#include <stdio.h>
void log(long long int N, long long int i)
{
    if(pow(2,i)==N){
        printf("%d",i);
        return;
    }
    else if(pow(2,i)>N){
        printf("%d",i-1);
        return;
    }
    log(N,i+1);

}
int main()
{
    long long int N;
    scanf("%lld",&N);
    log(N,0);

    return 0;
}