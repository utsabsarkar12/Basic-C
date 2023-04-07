// grading system
#include<stdio.h>
int main ()
{
    int mark;
     printf("Enter Mark: ");
     scanf("%d", &mark);

     switch (mark)
     {
    case 75 ... 100:
        printf("A");
        break;
    case 60 ... 74:
        printf("B");
        break;
    case 50 ... 59:
        printf("C");
        break;
    case 35 ... 49:
        printf("D");
        break;
    case 0 ... 34:
        printf("F");
        break ;
        default:
        printf("Invalid Mark Input.");
     }

  return 0;
}

