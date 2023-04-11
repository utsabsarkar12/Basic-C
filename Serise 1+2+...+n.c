#include<stdio.h>
int main ()
{
    int n, sum = 0;
    printf("Enter last number of the series: ");
    scanf("%d",&n);
    printf("1 + 2 + 3 + .... + %d\n",n);

    for(int i = 1; i<=n; i++)
    {
        sum = sum + i;
    }
    printf("Sum of the series is %d.\n",sum);

    return 0;
}
