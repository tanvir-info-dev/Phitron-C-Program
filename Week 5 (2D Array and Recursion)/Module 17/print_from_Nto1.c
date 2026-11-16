#include <stdio.h>

// --------------------- Process 1

// void hello(int i)
// {
//     if(i==0){           // End Condition  // Base Case
//         return;
//     }
//     printf("%d\n",i);
//     hello(i-1);         // Decrement
// }
// int main()
// {
//     int N;
//     scanf("%d",&N);
//     hello(N);          // Initialization

//     return 0;
// }


// -------------------- Process 2

// #include <stdio.h>
// void hello(int i , int N)
// {
//     if(i==N+1){         // End Condition  // Base Case
//         return;
//     }
//     hello(i+1,N);        // Increment
//     printf("%d\n",i);
// }
// int main()
// {
//     int i=1,N;
//     scanf("%d",&N);
//     hello(i,N);           // Initialization

//     return 0;
// }