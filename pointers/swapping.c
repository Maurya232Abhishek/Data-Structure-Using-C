#include<stdio.h>
void swap1(int a,int b) // pass by value(two numbers can't swapped by passing by value)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("a is %d b is %d\n",a,b);
}
void swap2(int *a, int *b)// pass by reference(numbers can be swapped)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void swap3(int *a, int *b)
{
    int *temp;
    temp=&a;
    
    a=&b;
    b=temp;
    printf("address of a and b are %d and %d in side swap3\n",&a,&b);
}

int main()
{
    int a=2;
    int b=4;
    printf("address of a and b are %d and %d\n",&a,&b);
    printf("a is %d and b is %d\n",a,b);
    swap1(a,b);
    printf("a is %d and b is %d\n",a,b);
    swap2(&a,&b);
    printf("address of a and b are %d and %d\n",&a,&b);
    printf("a is %d and b is %d\n",a,b);
    printf("afte swap3\n");
    swap3((&a),(&b));
    printf("address of a and b are %d and %d\n",&a,&b);
    printf("a is %d and b is %d\n",a,b);
    printf("hii");
    return 0;
}