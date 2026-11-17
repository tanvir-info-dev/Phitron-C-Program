#include <stdio.h>
void lucky_num(int n)
{
    if(n==0){
        printf("YES");
        return;
    }
    else{
        if(n%10==7 || n%10==4){
            lucky_num(n/10); 
        }
        else{
            printf("NO");
            return;
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%44==0 || n%77 ==0){
        printf("YES");
    }
    else{
        lucky_num(n);
    }

    return 0;
}