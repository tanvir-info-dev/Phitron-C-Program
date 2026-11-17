#include <stdio.h>
int main()
{
    int T,A,B,C;
    long long int M,ans;
    scanf("%d",&T);
    for(int i=1 ; i<=T ; i++){
        scanf("%lld%d%d%d",&M,&A,&B,&C);
        ans=M%(A*B*C);
        if(ans==0){
            ans=M/(A*B*C);
            printf("%lld\n",ans);
        }
        else{
            printf("-1\n");
        }
    }

    return 0;
}