#include<stdio.h>
int main ()
{
    int a[5], i, sum=0;
    double avg;

    for(i = 0; i<5; i++)
    {
        printf("Enter %d no. number: ",(i+1));
        scanf("%d",&a[i]);
    }

    for(i=0; i<5; i++)
    {
        sum = sum + a[i];
    }

    avg= sum/5;
    printf("The sum of number is %d.\n",sum);
    printf("The average of number is %.2lf.\n",avg);

    return 0;
}
