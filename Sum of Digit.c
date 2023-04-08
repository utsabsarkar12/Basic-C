#include<stdio.h>
int main ()
{
    int num, store, sum=0;

    printf("Enter a Digit: ");
    scanf("%d",&num);

    while(num!=0)
    {
        store = num % 10;
        sum = sum + store;
        num = num / 10;
    }
    printf("Sum of Digit is %d.",sum);

    return 0;
}
