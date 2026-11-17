#include <stdio.h>
#include <limits.h>
int main()
{
    int N,min=INT_MAX,count=0;
    scanf("%d",&N);
    int A[N];
    for(int i=0 ; i<N ; i++){
        scanf("%d",&A[i]);
    }
    for(int i=0 ; i<N ; i++){
        if(A[i]<=min)
        min=A[i];
    }
    for(int i=0 ; i<N ; i++){
        if(min==A[i])
        count++;
    }
    if(count%2==0){
        printf("Unlucky");
    }
    else{
        printf("Lucky");
    }
    
    return 0;
}





// #include <stdio.h>
// #include <limits.h>
// int main()
// {
//     int N,min=INT_MAX;
//     scanf("%d",&N);
//     int A[N],b[10000000]={0};
//     for(int i=0 ; i<N ; i++){
//         scanf("%d",&A[i]);
//     }
//     for(int i=0 ; i<N ; i++){
//         b[A[i]]++;
//     }
//     for(int i=0 ; i<10000000 ; i++){
//         if(b[i]!=0){
//             min=b[i];
//             break;
//         }
//     }
//     if(min%2==0){
//         printf("Unlucky");
//     }
//     else{
//         printf("Lucky");
//     }
    
//     return 0;
// }