#include<stdio.h>
#include<math.h>
int main ()
{
    float a,b,c;
    double s, area;

    printf("Enter 3 values of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area of Triangle is %.2lf",area);

    return 0;
}
