#include<stdio.h>
int main ()
{
    int number, reverse=0;
    printf("Enter any Digit: ");
    scanf("%d", &number);

    while(number!=0)
    {
        int temp = number%10;
        reverse=(reverse*10)+temp;
        number=number/10;
    }
    printf("Reverse of input number is %d\n",reverse);

    if(number == reverse)
    {
        printf("Number is palindrome.");
    }
    else
    {
        printf("Number is not a palindrome.");
    }
    return 0;
}

