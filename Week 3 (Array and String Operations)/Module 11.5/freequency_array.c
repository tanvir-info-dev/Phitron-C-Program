#include <stdio.h>
int main()
{
    // -------- Phitron Process
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i=0 ; i<N ; i++){
        scanf("%d",&a[i]);
    }
    int fre[50]={0};
    for(int i=0 ; i<N ; i++){
        fre[a[i]]++;
    }
    for(int i=0 ; i<5 ; i++){
            printf("%d -> %d\n",i,fre[i]);
    }




    // -------- My own process
    // int N;
    // scanf("%d",&N);
    // int a[N];
    // for(int i=0 ; i<N ; i++){
    //     scanf("%d",&a[i]);
    // }
    // int count[50]={0};
    // for(int i=0 ; i<N ; i++){
    //     for(int j=0 ; j<N ; j++){
    //         if(a[i]==a[j]){
    //             count[i]=count[i]+1;
    //         }
    //     } 
    //     printf("%d -> %d\n",a[i],count[i]);
    // }

    return 0;
}