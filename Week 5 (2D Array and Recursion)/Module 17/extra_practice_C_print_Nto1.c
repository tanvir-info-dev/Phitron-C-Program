#include <stdio.h>
void print_N_times(int N , int i)
{
    if(i==N+1){
        return;
    }
    print_N_times(N,i+1);
    if(i>1)
    printf("%d ",i);
    else
    printf("%d",i);
}
int main()
{
    int N;
    scanf("%d",&N);
    print_N_times(N,1);

    return 0;
}