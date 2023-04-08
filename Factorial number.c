#include<stdio.h>
int main ()
{
    int num, sum=1, i=1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(i <= num)
    {
        sum = sum * i;
        i++;
    }
    printf("Factorial of the number is %d",sum);

    return 0;
}
