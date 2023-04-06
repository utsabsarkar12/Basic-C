// if... else if... else practice
#include<stdio.h>
int main ()
{
    char input;
    printf("Enter a input:");
    scanf("%c", &input);
     if(input>='a' && input<='z') {
        printf("Input is a lower case.");}
        else if (input>='A' && input<='Z')
        {
            printf("Input is a upper.");
        }
     else if (input>='0' && input<='9'){
        printf("Input is a number.");
     }
     else {
        printf("Input is a special char.");
     }
     return 0;
}
