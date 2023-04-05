#include<stdio.h>
int main ()
{
    float r, area;
    printf("Enter circle redius: ");
    scanf("%f", &r);

    area=3.1416*r*r;
    printf("Area of circle is %.2f",area);

    return 0;
}
