// switch case
#include<stdio.h>
int main ()
{
    char ch;
    printf("Enter a oparetor:(+ or - or * or /)::");
    scanf("%c", &ch);
    int num1, num2;
    printf("Enter two number:");
    scanf("%d %d", &num1, &num2);
    switch(ch){
    case '+' :
         printf("Ascending of number is %d",(num1+num2));
        break;
    case '-' :
        printf("Descending of number is %d",(num1-num2));
        break;
     case '*' :
        printf("Maximum of number is %d",(num1*num2));
        break;
     case '/' :
        printf("Minimum of number is %d",(num1/num2));
        break;
    default:
        printf("Wrong Oparetr");
    }

        return 0;
}
