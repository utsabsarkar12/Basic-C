
#include<stdio.h>
int main ()
{
    int num1, num2, temp;
    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    num1 = num1 - num2;
    num2 = num2 + num1;
    num1 = num2 - num1;

    printf("swaping of two number is %d and %d.",num1,num2);

    return 0;
}
