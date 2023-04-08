#include<stdio.h>
int main ()
{
    int num, sum = 0, rem, store, i;
    printf("Enter any number: ");
    scanf("%d",&num);
    store = num;

    while(store>=1)
    {
       rem = store % 10;
       int  fact = 1;
       for(i = 1; i<=rem; i++)
       {
           fact = fact * i;
       }
       sum = sum + fact;

        store = store / 10;

    }
    printf("The sum is %d\n",sum);
    sum!=num?
        printf("%d is a not STRONG number.",num):printf("%d is a STRONG number.",num);
    return 0;
}
// 145
