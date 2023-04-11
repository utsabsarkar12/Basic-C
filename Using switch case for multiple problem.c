#include<stdio.h>
int main ()
{
    int op;
    printf("Select any Option:\n.");
    printf("1. Leap Year or Not.\n");
    printf("2. Even or Odd Number.\n");
    printf("3. Factorial Number.\n");
    printf("4. Reversed Number.\n");
    printf("Enter an option: ");
    scanf("%d",&op);

    switch (op)
    {
    case 1:
    {
        int year;
        printf("Enter a Year: ");
        scanf("%d",&year);
        (year%4==0 && year%100!=0 || year%400==0)?
        printf("%d is a Leap Year.",year):printf("%d is not a Leap Year.",year);

        break;
    }
    case 2:
    {
        int num;
        printf("Enter a Number: ");
        scanf("%d",&num);
        (num%2==0)?
        printf("%d is a Even Number.",num):printf("%d is a Odd Number.",num);

        break;
    }
    case 3:
    {
        int n, fact=1;
        printf("Enter a Number: ");
        scanf("%d", &n);

        for(int i=1; i<=n; i++)
        {
            fact=fact*i;
        }
        printf("Factorial of the Number is %d",fact);
        break;
    }
    case 4:
    {
        int number, reverse=0;
        printf("Enter Five Digit Number: ");
        scanf("%d", &number);

        for(int a=1; a<=5; a++)
        {
            int temp = number%10;
            reverse=(reverse*10)+temp;
            number=number/10;
        }
        printf("Reverse of input number is %d",reverse);
        break;

    }
    default:
    {
        printf("Wrong Option Input.");
    }
    }
    return 0;
}
