#include<stdio.h>

int main()
{
    int a[]={6,3,4,5,6,7,8};
    printf("int = %d\n",sizeof(int));
    printf("char= %d\n",sizeof(char));
    //int n=sizeof(a)/sizeof(int);
    //printf(n)
    char *p1;
    char c='x';
    p1=&c;
    int *p;

    int x=10;
    p=&x;
    printf("INTWALA\n");
    printf("%d \n",p);
    printf("%d \n",p+1);
    printf("CHARWALA\n");
    printf("%d \n",p1);
    //printf("%d \n",p1+1);
    printf("%d\n",*(a+1));
    //for(int i=0; i<=7 ; i++)
    //{
    //    printf("%d ",*(a+i));
    //}

    return 0;
}
