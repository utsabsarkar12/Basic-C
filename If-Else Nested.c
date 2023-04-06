// nested if else
#include<stdio.h>
int main ()
{
    int num1, num2, num3;
    printf("Enter three number:");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2){
        if(num1 > num3){
            printf("Number %d is largest.",num1);
        }
        else {
            printf("Number %d is largest.",num3);
        }
    }
    else {
        if (num2 > num3){
            printf("Number %d is largest.",num2);
        }
        else {
            printf("Number %d is largest.",num3);
        }
    }
    return 0;
}
