#include <stdio.h>
int main()
{
    int N,M,count0=0,count1=0;
    scanf("%d%d",&N,&M);
    if(N==M){
        int a[N][M];
        for(int i=0 ; i<N ; i++){
            for(int j=0 ; j<M ; j++){
                scanf("%d",&a[i][j]);
                if(a[i][j]==0){
                    count0++;
                }
                if(i==j && a[i][j]==1){
                    count1++;
                }
                if(i+j==N-1 && a[i][j]==1){
                    count1++;
                }
            }
        }
        if(count1==2*N && count0==N*M-count1+1 && N%2!=0){
            printf("YES");
        }
        else if(count1==2*N && count0==N*M-count1 && N%2==0){
            printf("YES");
        }
        else{
            printf("NO");
        }
        
    }
    else{
        printf("NO");
    }

    return 0;
}