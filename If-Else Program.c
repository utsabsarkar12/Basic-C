// if else practice
#include<stdio.h>
int main ()
{
    int angle_1, angle_2, angle_3, sum;
    printf("Enter the three angle of triangle:");
    scanf("%d %d %d", &angle_1, &angle_2, &angle_3);

    sum= angle_1+angle_2+angle_3;
    if (sum==180){
        printf("The triangle is valid.");
    }
    else{
        printf("The triangle is not valid");
    }
    return 0;
}
