#include <stdio.h>
void print_N_times(int N , int i)
{
    if(i==N+1){
        return;
    }
    printf("%d\n",i);
    print_N_times(N,i+1);
}
int main()
{
    int N;
    scanf("%d",&N);
    print_N_times(N,1);

    return 0;
}