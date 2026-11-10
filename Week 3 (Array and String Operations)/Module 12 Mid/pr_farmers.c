#include <stdio.h>
int main()
{
    int T,M1,M2,D;
    scanf("%d",&T);
    for(int i=1 ; i<=T ; i++){
        scanf("%d%d%d",&M1,&M2,&D);
        int work,new_time,diff;
        work=M1*D;
        new_time=work/(M1+M2);
        diff=D-new_time;
        printf("%d\n",diff);
    }

    return 0;
}