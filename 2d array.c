#include<stdio.h>
int main ()
{
    int a[5][1]= {1,2,3,4,5};
    int b[1][5]= {1,2,3,4,5};
    int i, j, num[5][5];

    for(i=0; i<5; i++)
    {
        if(i==0)
        {
            printf("    1	 2	 3	 4	 5\n");
            printf("-------------------------------------\n");
        }
        printf("%d |",i+1);

        for(j=0; j<5; j++)
        {
            num[i][j] = a[i][0]*b[0][j];
            printf(" %d\t",num[i][j]);
        }
        printf("\n");
    }
    return 0;
}
