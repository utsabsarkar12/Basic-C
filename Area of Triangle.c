#include<stdio.h>
int main ()
{
    float base, height;
    double area;

    printf("Enter triangle base and height: ");
    scanf("%f %f", &base, &height);

    area=0.5*base*height;

    printf("Area of Triangle is %.2lf",area);

    return 0;
}
