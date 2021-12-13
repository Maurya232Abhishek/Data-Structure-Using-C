#include<stdio.h>
    int main()
    {
        int a[5];
        scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);// 5 4 1 2 3

        printf("\n");
        for(int i=0; i<5; i++)
        {
            for(int j=1; j<=5-a[i]; j++)
            {
                printf(" ");
            }
            for(int j=1; j<=2*a[i]-1; j++)
            {

            printf("0");
        }
        printf("\n");
    }

    return 0;
}
