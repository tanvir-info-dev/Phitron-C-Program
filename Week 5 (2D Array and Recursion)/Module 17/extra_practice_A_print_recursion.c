#include <stdio.h>
void print_recursion(int N , int i)
{
    if(i==N+1){
        return;
    }
    printf("I love Recursion\n");
    print_recursion(N,i+1);
}
int main()
{
    int N;
    scanf("%d",&N);
    print_recursion(N,1);

    return 0;
}