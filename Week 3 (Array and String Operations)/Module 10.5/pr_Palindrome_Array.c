#include <stdio.h>
int main()
{
    int N,x=1;
    scanf("%d",&N);
    int a[N];
    for(int i=0 ; i<N ; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0,j=N-1 ; i<=j ; i++,j--){
        if(a[i]!=a[j]){
            printf("NO");
            x=0;
            break;
        }
    }
    if(x!=0){
        printf("YES");
    }

    return 0;
}