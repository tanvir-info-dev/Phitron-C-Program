#include <stdio.h>
int dn(){
    int N;
    scanf("%d",&N);
    int A[N],count=1;
    for(int i=0 ; i<N ; i++){
        scanf("%d",&A[i]);
    }
    for(int i=0 ; i<N-1 ; i++){
        for(int j=i+1 ; j<N ; j++){
            if(A[i]>A[j]){
                int temp;
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    for(int i=1 ; i<N ; i++){
        if(A[i]!=A[i-1]){
            count++;
        }
    }
    if(N==0){
        count=0;
    }
    return count;

}
int main()
{
    int ans = dn();
    printf("%d",ans);

    return 0;
}