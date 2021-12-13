#include<stdio.h>
void dec_to_bin(int x,int p[]);

void showBin(int p[]);

int main()
{
    //float x;
    //scanf("%f",&x);
    //printf("%f Hello World\n",x);
    int x;
    int num;
    int num1;
    int res1;
    int p[10]={0};
    int p1[10]={0};
    int res[10]={0};
    //printf("%d\n",x);
    printf(" \n 0-quit\n 1-Read Input \n 2- Print in Binary, Decimal\n 3- >>\n 4- <<\n");
    while(1)
    {
        printf("\n-----------------------------------\n");
        //printf(" \n 0-quit\n 1-Read Input \n 2- Print in Binary, Decimal\n 3- >>\n 4- <<\n");
        printf("Choose any option:\n");
        scanf("%d",&x);

        switch(x)
        {
        case 0:

            //showBin(p);
            return 0;
            break;
        case 1:
            printf("Enter the first number:\n");
            scanf("%d",&num);
            printf("Enter the second number:\n");
            scanf("%d",&num1);

            break;
        case 2:
            printf("\n----First Number----\n");
            printf("Decimal = %d\n",num);
            dec_to_bin(num,p);
            printf("Binary = ");
            showBin(p);
            printf("\n----Second Number----\n");
            printf("Decimal = %d\n",num1);
            dec_to_bin(num1,p1);
            printf("Binary = ");
            showBin(p1);
            break;
        case 3:
            num=num>>1;
            break;
        case 4:
            num=num<<1;
            break;
        case 5:
            num = ~num;
            printf("%d\n",num);
            dec_to_bin(num,p);
            //printf("Binary = ");
            showBin(p);

            break;
        case 6:
            printf("\n----First Number----\n");
            printf("Decimal = %d\n",num);
            dec_to_bin(num,p);
            printf("Binary = ");
            showBin(p);
            printf("\n----Second Number----\n");
            printf("Decimal = %d\n",num1);
            dec_to_bin(num1,p1);
            printf("Binary = ");
            showBin(p1);
            res1=num & num1;
            printf("\n----Bitwise And ----\n");
            dec_to_bin(res1,res);
            showBin(res);
            break;
        case 7:
            printf("\n----First Number----\n");
            printf("Decimal = %d\n",num);
            dec_to_bin(num,p);
            printf("Binary = ");
            showBin(p);
            printf("\n----Second Number----\n");
            printf("Decimal = %d\n",num1);
            dec_to_bin(num1,p1);
            printf("Binary = ");
            showBin(p1);
            res1=num | num1;
            printf("\n----Bitwise OR ----\n");
            dec_to_bin(res1,res);
            showBin(res);
            break;
        case 8:
            printf("\n----First Number----\n");
            printf("Decimal = %d\n",num);
            dec_to_bin(num,p);
            printf("Binary = ");
            showBin(p);
            printf("\n----Second Number----\n");
            printf("Decimal = %d\n",num1);
            dec_to_bin(num1,p1);
            printf("Binary = ");
            showBin(p1);
            res1=num ^ num1;
            printf("\n----Bitwise XOR ----\n");
            dec_to_bin(res1,res);
            showBin(res);
            break;




        default:

            printf("Warning !!!Type correct option\n");
            break;

        }
    }


    return 0;
}
void dec_to_bin(int x,int p[])
{
    //p={0,0,0,0,0,0,0,0,0,0};
    for(int i=0; i<10; i++)
    {
        p[i]=0;
    }
    int i=0;
    while(x!=0)
    {
        p[i]=x%2;
        x=x/2;
        i+=1;
    }
    //showBin(bin);
    //return bin;
}
void showBin(int p[])
{
    //int n=sizeof(a)/sizeof(int);
    for(int i=10-1; i>=0; i--)
    {
        printf("%d",p[i]);
    }

}
