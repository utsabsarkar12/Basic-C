#include<stdio.h>
int main ()
{
    int a[5][5];
    int i, j, num;

    for(i=1; i<6; i++)
    {
        if(i==1)
        {
            printf("    1	 2	 3	 4	 5\n");
            printf("-------------------------------------\n");
        }
        printf("%d |",i);
        for(j=1; j<6; j++)
        {
            num = i*j;
            printf(" %d\t",num);
        }
        printf("\n");
    }
    return 0;
}
