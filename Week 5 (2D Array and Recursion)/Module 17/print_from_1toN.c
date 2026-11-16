#include <stdio.h>
void hello(int i , int N)
{
    if(i==N+1){         // End Condition  // Base Case
        return;
    }
    printf("%d\n",i);
    hello(i+1,N);        // Increment
}
int main()
{
    int i=1,N;
    scanf("%d",&N);
    hello(i,N);           // Initialization

    return 0;
}