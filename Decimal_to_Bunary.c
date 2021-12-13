#include<stdio.h>

int main()
{
    int ans=0;
    int rem;
    int n=1001;
    int mul=1;
    while(n>0)
    {
        rem= n%10;
        n= n/10;
        ans += mul*rem;
        mul=mul*2;

    }
    //printf("%d",ans);
    printf("%d",sizeof(int));


    return 0;
}
